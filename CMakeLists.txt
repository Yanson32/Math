cmake_minimum_required(VERSION 3.1.0)

#Compile Features
set(GU_PRIVATE_COMPILE_FEATURES "cxx_nullptr" "cxx_right_angle_brackets")
set(GU_PUBLIC_COMPILE_FEATURES "cxx_nullptr")

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
