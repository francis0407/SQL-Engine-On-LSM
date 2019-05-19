# SQL-Engine-On-LSM
A toy SQL engine built on top of LSM(LevelDB), project for the course DataBase System Implementation 

## Build 

### Generate Antlr Files
```shell
> antlr/generateCppFiles.sh
```

### Build
```shell
> mkdir build
> cd build
> cmake ..
> make
```

### Run Tests
```shell
> cd build
> ./unit_test
```

### Use the REPL Shell
```shell
> cd build
> ./shell
```

### Example
Basic Syntax:
```
SQL > CREATE TABLE T1 (T1A INTEGER, T1B INTEGER, T1C STRING, T1D FLOAT) INDEX ON (T1B);
INFO
'SUCCESS!'
SQL > INSERT INTO T1 VALUES (1, 1, 'AAA', 1.0), (2, 1, 'BBB', 2.0), (3, 2, 'CCC', 3.0), (4, 2, 'DDD',4.0);
INFO
'INSERT 4 ROWS!'
SQL > SELECT T1A, T1C FROM T1 WHERE T1B = 2;
T1A | T1C
3 | 'CCC'
4 | 'DDD'
```
Copy data from csv file:
```
SQL > CREATE TABLE T2 (T2A INTEGER, T2B STRING);
INFO
'SUCCESS!'
SQL > COPY T2 FROM 'data.csv' DELIMITER ',' CSV HEADER;
INFO
'COPY 4 ROWS!'
```
Built-in command:
```
SQL > SHOW TABLES;
TableName | TableID
'GLOBALSETTING' | 0
'SCHEMATABLE' | 1
'T1' | 2
'T2' | 3
SQL > SHOW SCHEMA FROM T1;
NAME | DATATYPE | INDEX?
'T1A' | 'INTEGER' | 1
'T1B' | 'INTEGER' | 1
'T1C' | 'STRING' | 0
'T1D' | 'FLOAT' | 0
```
Join query:
```
SQL > SELECT T1A, T1B, T1C FROM T1;
T1A | T1B | T1C
1 | 1 | 'AAA'
2 | 1 | 'BBB'
3 | 2 | 'CCC'
4 | 2 | 'DDD'
SQL > SELECT T2A, T2B FROM T2;
T2A | T2B
1 | 'XXX'
2 | 'YYY'
3 | 'ZZZ'
4 | 'PPP'
SQL > SELECT T1A, T1C, T2B FROM T1, T2 WHERE T1B = T2A;
T1A | T1C | T2B
1 | 'AAA' | 'XXX'
2 | 'BBB' | 'XXX'
3 | 'CCC' | 'YYY'
4 | 'DDD' | 'YYY'
SQL > EXIT;
```