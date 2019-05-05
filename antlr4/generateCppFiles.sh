
basepath=$(cd `dirname $0`; pwd)
target=$basepath/../src/parser/antlr

# Generate c++ files
cmd1=`java -jar $basepath/../deps/antlr-4.7.2-complete.jar -Dlanguage=Cpp -o $target -visitor -no-listener -package simplesql::parser::antlr $basepath/SimpleSql.g4`


# Fix namespaces
sed -i "s/namespace simplesql::parser::antlr {/namespace simplesql { namespace parser { namespace antlr {/" $target/SimpleSqlBaseVisitor.h
sed -i "s/}  \/\/ namespace simplesql::parser::antlr/}}}  \/\/ namespace simplesql::parser::antlr/" $target/SimpleSqlBaseVisitor.h

sed -i "s/namespace simplesql::parser::antlr {/namespace simplesql { namespace parser { namespace antlr {/" $target/SimpleSqlVisitor.h
sed -i "s/}  \/\/ namespace simplesql::parser::antlr/}}}  \/\/ namespace simplesql::parser::antlr/" $target/SimpleSqlVisitor.h

sed -i "s/namespace simplesql::parser::antlr {/namespace simplesql { namespace parser { namespace antlr {/" $target/SimpleSqlLexer.h
sed -i "s/}  \/\/ namespace simplesql::parser::antlr/}}}  \/\/ namespace simplesql::parser::antlr/" $target/SimpleSqlLexer.h

sed -i "s/namespace simplesql::parser::antlr {/namespace simplesql { namespace parser { namespace antlr {/" $target/SimpleSqlParser.h
sed -i "s/}  \/\/ namespace simplesql::parser::antlr/}}}  \/\/ namespace simplesql::parser::antlr/" $target/SimpleSqlParser.h