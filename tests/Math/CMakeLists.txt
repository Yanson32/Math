#list of tests
set(TESTS 	"Vector2Test"
			"DegreeTest"
			#"FunctionsTest"
			#"LineTest"
			#"RadianTest"
			#"Vector2Test"
)

#list of subdirectories
set(SUBDIRECTORIES "")

#Add all subdirectories
foreach(LOOP_VAR ${SUBDIRECTORIES})
	add_subdirectory(${LOOP_VAR})
endforeach()

#Add all tests
foreach(LOOP_VAR ${TESTS})
	add_executable("${LOOP_VAR}" "${LOOP_VAR}.cpp" )
    target_link_libraries( ${LOOP_VAR} Catch2 Catch2WithMain Math::Math)
    set_property(TARGET ${LOOP_VAR} PROPERTY CXX_STANDARD 14)
    set_property(TARGET ${LOOP_VAR} PROPERTY CXX_EXTENSIONS OFF)
	set_target_properties("${LOOP_VAR}" PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
endforeach()
