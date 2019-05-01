#list of tests
set(TESTS 	"PointTest"
			"DegreeTest"
			"FunctionsTest"
			"LineTest"
)

#list of subdirectories
set(SUBDIRECTORIES "")

#Add all subdirectories
foreach(LOOP_VAR ${SUBDIRECTORIES})
	add_subdirectory(${LOOP_VAR})
endforeach()

#Add all tests
foreach(LOOP_VAR ${TESTS})
	add_executable("${LOOP_VAR}" "${LOOP_VAR}.cpp")
	target_link_libraries("${LOOP_VAR}" PRIVATE GTest::GTest GTest::Main Math)
	gtest_discover_tests("${LOOP_VAR}")
endforeach()

