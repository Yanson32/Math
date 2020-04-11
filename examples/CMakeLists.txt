set(FILE "DegreeExample"
         "RadianExample"
)




foreach(LOOP_VAR ${FILE})
    add_executable("${LOOP_VAR}" "${LOOP_VAR}.cpp")
    target_link_libraries("${LOOP_VAR}" PRIVATE Math::Math)
endforeach()
