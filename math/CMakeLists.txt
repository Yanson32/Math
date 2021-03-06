#Compile Features
set(GU_PRIVATE_COMPILE_FEATURES "cxx_auto_type")
set(GU_PUBLIC_COMPILE_FEATURES "cxx_defaulted_functions"
"cxx_final"
"cxx_explicit_conversions"
"cxx_noexcept"
"cxx_constexpr"
)

add_library("${PROJECT_NAME}" INTERFACE)
add_library("Math::Math" ALIAS "${PROJECT_NAME}")

add_subdirectory("include")

#Define compiler features
target_compile_features("${PROJECT_NAME}"
			INTERFACE
				${GU_PRIVATE_COMPILE_FEATURES}
			INTERFACE
				${GU_PUBLIC_COMPILE_FEATURES}
			)

#Add includes to target
target_include_directories("${PROJECT_NAME}" INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  $<INSTALL_INTERFACE:include>
	)


#Install Source Files
install(TARGETS "${PROJECT_NAME}" DESTINATION ${CMAKE_INSTALL_PREFIX}/lib EXPORT "${PROJECT_NAME}-Exports")
install(EXPORT "${PROJECT_NAME}-Exports" DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/${PROJECT_NAME}"  NAMESPACE Math::)


include(CMakePackageConfigHelpers)

#Create package version file
write_basic_package_version_file(	"${CMAKE_CURRENT_BINARY_DIR}/lib/cmake/${PROJECT_NAME}/${PROJECT_NAME}ConfigVersion.cmake"
  									VERSION 
										${${PROJECT_NAME}_VERSION}
  									COMPATIBILITY 
										AnyNewerVersion
)

#Create package config file

configure_package_config_file(	"${Math_SOURCE_DIR}/cmake/${PROJECT_NAME}Config.cmake.in" 
								"${CMAKE_CURRENT_BINARY_DIR}/lib/cmake/${PROJECT_NAME}/${PROJECT_NAME}Config.cmake"
                              	INSTALL_DESTINATION 
									lib/cmake/${PROJECT_NAME}
)

install(
	FILES 	
	"${CMAKE_CURRENT_BINARY_DIR}/lib/cmake/${PROJECT_NAME}/${PROJECT_NAME}Config.cmake" 
	"${CMAKE_CURRENT_BINARY_DIR}/lib/cmake/${PROJECT_NAME}/${PROJECT_NAME}ConfigVersion.cmake"
    DESTINATION 
	"${CMAKE_INSTALL_PREFIX}/lib/cmake/${PROJECT_NAME}"
)

#Export package to the user package registry
#export(PACKAGE "${PROJECT_NAME}")

#Export targets to the build tree
#export(TARGETS "${PROJECT_NAME}" FILE "${CMAKE_CURRENT_BINARY_DIR}/lib/cmake/${PROJECT_NAME}/${PROJECT_NAME}-Exports.cmake" NAMESPACE Math::)


