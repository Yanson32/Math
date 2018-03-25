cmake_minimum_required(VERSION 3.1.0)

#Compile Features
set(GU_PRIVATE_COMPILE_FEATURES "cxx_auto_type")
set(GU_PUBLIC_COMPILE_FEATURES "cxx_defaulted_functions"
"cxx_final"
"cxx_explicit_conversions"
"cxx_noexcept"
"cxx_constexpr"
)

project("Math")

add_library("${PROJECT_NAME}" "")

add_subdirectory("include")

add_subdirectory("src")



#Add includes to target
target_include_directories("${PROJECT_NAME}" PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  $<INSTALL_INTERFACE:include>
	)

#Define compiler features
target_compile_features("${PROJECT_NAME}"
			PRIVATE
				${GU_PRIVATE_COMPILE_FEATURES}
			PUBLIC
				${GU_PUBLIC_COMPILE_FEATURES}
			)

#Make the BUILD_TESTING variable show up in the cmake gui
option(BUILD_TESTING "Set to TRUE if you want to build unit tests" FALSE)

if(BUILD_TESTING)
	
	include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/Modules/BoostTestHelpers.cmake")

	#Find boost
	find_package(Boost 1.60.0 COMPONENTS system unit_test_framework REQUIRED)

	include(CTest)

	set(TEST_INCLUDES "${Boost_INCLUDE_DIRS}")
	list(APPEND TEST_INCLUDES "${CMAKE_CURRENT_SOURCE_DIR}/include")
	set(TEST_LIBRARIES "${Boost_LIBRARIES}")
	list(APPEND TEST_LIBRARIES "GameUtilities")
	set(TEST_PRIVATE_COMPILE_FEATURES ${GU_PRIVATE_COMPILE_FEATURES})
	
	add_subdirectory("test")
	add_definitions("-DBUILD_TESTING")
endif()
