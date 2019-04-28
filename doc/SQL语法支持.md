# SQL语法支持

一个简单的支持Filter-Project-Join的SQL引擎。

1. create table 建表
2. insert 插入/更新
3. delete 删除
4. select 查询
   
## CREATE TABLE
Syntax:
```sql
CREATE TABLE table_name (col_name col_type, ...)[INDEX ON (col_name)];
```
注： 第一个字段为主键，后面跟着定义辅助索引。

## INSERT INTO
Syntax:
```sql
INSERT INTO table_name VALUES (v1, v2, v3), ...;
```
注： 如果主键存在则会覆盖写，否则新插入。

## DELETE
```sql
DELETE FROM table_name WHERE v1=?;
```
只支持单点删除，只能指定主键。
## SELECT
```sql
SELECT col1, ... FROM table1, table2, ... WHERE condition;
```
