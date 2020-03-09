set(FILES "${CMAKE_CURRENT_SOURCE_DIR}/Line.cpp"
#"${CMAKE_CURRENT_SOURCE_DIR}/Point.cpp"
"${CMAKE_CURRENT_SOURCE_DIR}/Ray.cpp"
#"${CMAKE_CURRENT_SOURCE_DIR}/Vector.cpp"
#"${CMAKE_CURRENT_SOURCE_DIR}/Functions.cpp"
"${CMAKE_CURRENT_SOURCE_DIR}/Vector2.cpp"
)

set(SUB_DIRECTORIES "")

set(RELATIVE_PATH "src/Math")

#Add subdirectories
foreach(LOOP_VAR ${SUB_DIRECTORIES})
    add_subdirectory("${LOOP_VAR}")
endforeach()


if(FILES)
	#Add source file to target
	target_sources(	"${PROJECT_NAME}" PRIVATE ${FILES})

	#Install source files
	install(FILES ${FILES} DESTINATION "${RELATIVE_PATH}")
endif()
