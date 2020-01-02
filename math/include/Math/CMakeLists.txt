set(FILES "${CMAKE_CURRENT_SOURCE_DIR}/Degree.h"
"${CMAKE_CURRENT_SOURCE_DIR}/Radian.h"
"${CMAKE_CURRENT_SOURCE_DIR}/Point.h"
"${CMAKE_CURRENT_SOURCE_DIR}/Line.h"
"${CMAKE_CURRENT_SOURCE_DIR}/Ray.h"
"${CMAKE_CURRENT_SOURCE_DIR}/Vector.h"
"${CMAKE_CURRENT_SOURCE_DIR}/Constants.h"
"${CMAKE_CURRENT_SOURCE_DIR}/Functions.h"
"${CMAKE_CURRENT_SOURCE_DIR}/cVector.h"

)
set(SUB_DIRECTORIES "")

set(RELATIVE_PATH "include/Math")

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
