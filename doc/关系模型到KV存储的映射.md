# 关系模型到KV存储的映射

由于底层采取的是现有的KV存储引擎，因此需要将上层的关系模型映射到KV空间。

主要参考TiDB的实现：https://pingcap.com/blog-cn/tidb-internal-2/


## 编码规则

对于每一个table分配一个唯一的TableID（int32 ),每一行编码格式如下： 
> Key: TablePrefix_TableID_RowPrefix_PrimaryKey  [1 + ４ + 1 + x bytes]
>
> Value: [Col1, Col2, Col3, ...]


同时我们需要支持二级索引，因为二级索引无法保证唯一，因此需要在后方添加PrimaryKey，这样的话通过扫描二级索引的前缀，就可以获得其对应的PrimaryKey，再构造RowKey获得数据：
> Key: TablePrefix_TableID_IndexPrefix_IndexID_IndexValue_PrimaryKey
>
> Value: NULL

其实这样有个问题就是PrimaryKey如果不是定长的话，有点浪费空间，TiDB采用的是一个定长的RowID，如果PK是整型的话就可以代替RowID。我这里直接抛弃RowID这个想法，因为我暂时没想到为什么要用它？？

需要再解释一下这几个Prefix，我认为这些Prefix用1个字节就足够了，因为除了IndexValue外，其他部分都是定长且对齐的，所有持久化的内容根据Prefix+４Byte +Prefix+ Value(1+4+1+x)的格式来编码，就可以保证同一个表在Key上是连续的，且不会受到别的表的影响（可以进行Scan）。

另一个问题是IndexValue如果是变长的怎么处理，IndexValue不是最后的一个项，所以会出现String类型冲突问题，在Scan的时候会扫描到无用项，有几个处理的思路，一个是把PrimaryKey放到Value里，它就不会影响Key的偏序关系，另一个思路就是我给它截断成定长的String，然后每次扫到之后要再跳到PrimaryKey里做验证，两者都比较麻烦。
## 元数据存储

元数据也用关系模型保存，这样就可以统一用高层的API访问，不需要为元数据另做编码(在设计上尽量不损失性能)。

元数据主要有：
1. 全局的KV信息，用TableID=0的表格存储，Schema:[Key Int, Value String]，这里Key用Int来编码主要原因是全局的KV信息理应提前在编译期编码过。 全局的KV信息保存了例如TableID当前计数。
2. Table Schema信息，用TableID=1的表格存储，Schema:[TableName String, TableID Integer, TableSchema String]