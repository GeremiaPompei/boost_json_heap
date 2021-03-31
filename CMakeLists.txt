cmake_minimum_required(VERSION 3.6)

project(boost_json_heap)

set(Boost_USE_STATIC_LIBS OFF) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF) 
add_definitions(-DBOOST_ALL_NO_LIB)
add_definitions(-DBOOST_ALL_DYN_LINK)

find_package(Boost 1.45.0 COMPONENTS) 

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS}) 
    add_executable(${PROJECT_NAME} value.cpp main.cpp json_handler.cpp)
    target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
endif()
