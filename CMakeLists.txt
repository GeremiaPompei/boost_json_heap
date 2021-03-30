cmake_minimum_required(VERSION 3.0)

project(boost_json_heap)

find_package(Boost 1.45.0 COMPONENTS filesystem regex)

add_executable(boost_json_heap main.cpp)

install(TARGETS boost_json_heap RUNTIME DESTINATION bin)

set(Boost_USE_STATIC_LIBS OFF) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF) 

find_package(Boost 1.45.0 COMPONENTS *boost libraries here*) 

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS}) 
    add_executable(progname file1.cxx file2.cxx) 
    target_link_libraries(progname ${Boost_LIBRARIES})
endif()
