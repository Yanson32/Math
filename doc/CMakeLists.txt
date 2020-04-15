
find_package(Doxygen REQUIRED)

set(DOXYGEN_INPUT_DIR ${PROJECT_SOURCE_DIR}/doc)
set(DOXYGEN_OUTPUT_DIR ${PROJECT_BINARY_DIR}/doc)
set(MATH_DOC_INPUT_DIR "${${PROJECT_NAME}_SOURCE_DIR}/math/include/${PROJECT_NAME}")
set(MATH_DOC_OUTPUT_DIR "${CMAKE_CURRENT_BINARY_DIR}")
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in" "${MATH_DOC_OUTPUT_DIR}/Doxyfile")
message("Math documentation built")

add_custom_target( doc ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${MATH_DOC_OUTPUT_DIR}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM )
