cmake_minimum_required(VERSION 3.21)
project(week_6)

set(CMAKE_CXX_STANDARD 20)

set(Headers empty_node.h date.h database.h condition_parser.h date_comparison_node.h comparison.h event_comparison_node.h logical_operation_node.h node.h test_runner.h token.h)
add_executable(week_6 ${PROJECT_SOURCE_DIR}/main.cpp date.cpp database.cpp condition_parser.cpp condition_parser_test.cpp date_comparison_node.cpp empty_node.cpp event_comparison_node.cpp logical_operation_node.cpp node.cpp token.cpp)
