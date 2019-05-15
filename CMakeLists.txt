CMAKE_MINIMUM_REQUIRED(VERSION 2.8) # cmake最低版本要�?

PROJECT(SQL-ON-LSM)    # 工程�? CppTemplate

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11") # 添加c++11标准支持

SET(CMAKE_C_COMPILER "/usr/bin/gcc") # 默认c编译�?
SET(CMAKE_CXX_COMPILER "/usr/bin/g++") # 默认c++编译�?

SET(CMAKE_BUILD_TYPE "Debug")  # Debug模式 选项: Release Debug MinSizeRel RelWithDebInfo

SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")  # debug模式�? gdb相关选项
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall") # release模式�? gdb相关选项

# set(CMAKE_VERBOSE_MAKEFILE ON) # 开启调�? 出现问题时开�?

# enable_testing() # 打开测试

add_definitions(-DDEBUG) # 相当于代码中 #define DEBUG

# add_subdirectory(test) # 添加test子目�?

# SET(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin") # 可执行文件输出目�?

INCLUDE_DIRECTORIES(
   "${PROJECT_SOURCE_DIR}"
   "${PROJECT_SOURCE_DIR}/include"
   "${PROJECT_SOURCE_DIR}/include/antlr4-runtime" 
   "${PROJECT_SOURCE_DIR}/src" 
   "${PROJECT_SOURCE_DIR}/src/parser/antlr") # 头文件包含目�?

AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/src" simplesql) # 添加源代码文件夹, 自动扫描所有文�?
AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/src/expressions" simplesql_expressions)
AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/src/datatypes" simplesql_datatypes)
AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/src/operators" simplesql_operators)
AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/src/parser" simplesql_parser)
AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/src/analyzer" simplesql_analyzer)
AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/src/execution" simplesql_execution)
AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/src/parser/antlr" simplesql_parser_antlr)
AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/src/util" simplesql_util)

AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/test/parser" tests_parser)
AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/test/expressions" tests_expressions)
AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/test/analyzer" tests_analyzer)
AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/test/execution" tests_execution)
AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/test/util" tests_util)

AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/test" tests)
link_libraries(
   "${PROJECT_SOURCE_DIR}/lib/libgtest.a"
   "${PROJECT_SOURCE_DIR}/lib/libgtest_main.a"
   "${PROJECT_SOURCE_DIR}/lib/libantlr4-runtime.a"
   "${PROJECT_SOURCE_DIR}/lib/libantlr4-runtime.so"
   "${PROJECT_SOURCE_DIR}/lib/libleveldb.a"
   pthread)

add_executable(unit_test # 输出名为xxx的可执行文件
   ${simplesql}
   ${simplesql_expressions}
   ${simplesql_datatypes}
   ${simplesql_operators}
   ${simplesql_parser}
   ${simplesql_parser_antlr}
   ${simplesql_analyzer}
   ${simplesql_execution}
   ${simplesql_util}
   ${tests_parser}
   ${tests_analyzer}
   ${tests_expressions}
   ${tests_execution}
   ${tests_util}
)