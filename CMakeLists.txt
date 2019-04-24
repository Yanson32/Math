cmake_minimum_required(VERSION "3.0.0")

#Set target ouput directory
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

project("Math" VERSION 0.0.0.0)
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)
string(TOLOWER ${PROJECT_NAME} PROJECT_NAME_LOWER)

add_subdirectory("math")

include("CTest")

#Make the MATH_BUILD_TESTS variable show up in the cmake gui
option(MATH_BUILD_TESTS "Set to TRUE if you want to build unit tests" FALSE)

if(MATH_BUILD_TESTS)
	find_package("GTest" REQUIRED)
	include("GoogleTest")
	add_subdirectory("tests")
endif()
