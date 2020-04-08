set(RELATIVE_PATH "include/Math")

set(FILES "${CMAKE_CURRENT_LIST}/Degree.h"
"${CMAKE_CURRENT_LIST}/Radian.h"
"${CMAKE_CURRENT_LIST}/Point2.h"
"${CMAKE_CURRENT_LIST}/Line.h"
"${CMAKE_CURRENT_LIST}/Vector.h"
"${CMAKE_CURRENT_LIST}/Constants.h"
"${CMAKE_CURRENT_LIST}/Functions.h"
"${CMAKE_CURRENT_LIST}/Vector2.h"

)
set(SUB_DIRECTORIES "")



#Add subdirectories
foreach(LOOP_VAR ${SUB_DIRECTORIES})
    add_subdirectory("${LOOP_VAR}")
endforeach()

if(FILES)
	#Add source file to target
	target_sources(	"${PROJECT_NAME}" INTERFACE ${FILES})

	#Install source files
	install(FILES ${FILES} DESTINATION "${RELATIVE_PATH}")
endif()
