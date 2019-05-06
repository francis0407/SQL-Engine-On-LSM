# SQL-Engine-On-LSM
A toy SQL engine built on top of LSM(LevelDB), project for the course DataBase System Implementation 

## Build 

### Generate Antlr Files
```shell
> antlr/generateCppFiles.sh
```

### Build Tests
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