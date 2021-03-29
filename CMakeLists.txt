cmake_minimum_required(VERSION 3.0)

project(boost_json_heap)

add_executable(boost_json_heap main.cpp)

install(TARGETS boost_json_heap RUNTIME DESTINATION bin)
