message("CMAKE_VERSION:${CMAKE_VERSION}")
cmake_minimum_required(VERSION 2.8)
project(testci)

macro(use_cxx11)
  if (CMAKE_VERSION VERSION_LESS "3.1")
    # if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    #   set (CMAKE_CXX_FLAGS "--std=c++11 ${CMAKE_CXX_FLAGS}")
    # endif ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11")
  else ()
    set (CMAKE_CXX_STANDARD 11)
  endif ()
endmacro(use_cxx11)

use_cxx11()

add_executable(${PROJECT_NAME} testci.cpp)