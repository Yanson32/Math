set(RELATIVE_PATH "include/Math")

set(FILES "${CMAKE_CURRENT_LIST_DIR}/Degree.h"
"${CMAKE_CURRENT_LIST_DIR}/Radian.h"
"${CMAKE_CURRENT_LIST_DIR}/Line.h"
"${CMAKE_CURRENT_LIST_DIR}/Vector.h"
"${CMAKE_CURRENT_LIST_DIR}/Constants.h"
"${CMAKE_CURRENT_LIST_DIR}/Functions.h"
"${CMAKE_CURRENT_LIST_DIR}/Vector2.h"

)
set(SUB_DIRECTORIES "")



#Add subdirectories
foreach(LOOP_VAR ${SUB_DIRECTORIES})
    add_subdirectory("${LOOP_VAR}")
endforeach()

if(FILES)
	#Add source file to target
	#target_sources(	"${PROJECT_NAME}" INTERFACE ${FILES})

	#Install source files
	install(FILES ${FILES} DESTINATION "${RELATIVE_PATH}")
endif()
