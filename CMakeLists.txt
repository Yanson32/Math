cmake_minimum_required(VERSION "3.0.0")

#Set target ouput directory
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

option(MATH_BUILD_EXAMPLES "Build example executables" FALSE)
option(MATH_BUILD_TESTS "Build unit tests" FALSE)
option(MATH_BUILD_DOC "Set to TRUE if you want to build documentation" FALSE)
option(BUILD_SHARED_LIBS "Build shared library" TRUE)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules")

project("Math" VERSION 0.0.0.0)
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)
string(TOLOWER ${PROJECT_NAME} PROJECT_NAME_LOWER)

add_subdirectory("math")

include("CTest")

#Make the MATH_BUILD_TESTS variable show up in the cmake gui
option(MATH_BUILD_TESTS "Set to TRUE if you want to build unit tests" FALSE)

#Build example executables
if(MATH_BUILD_EXAMPLES)
	add_subdirectory("examples")
endif()

#Build unit tests
if(MATH_BUILD_TESTS)
	find_package("GTest" REQUIRED)
	include("GoogleTest")
	add_subdirectory("tests")
endif()

#Build documentation
if(MATH_BUILD_DOC)
	add_subdirectory("doc")
endif()

# uninstall target
if(NOT TARGET uninstall)
  configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)

  add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)
endif()


include ("CPackConfig")
include ("CPack")
