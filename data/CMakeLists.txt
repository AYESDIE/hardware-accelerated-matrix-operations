set(MATRICES
    a
    b)

foreach(MATRIX IN ITEMS ${MATRICES})
    configure_file(
            ${CMAKE_CURRENT_SOURCE_DIR}/${MATRIX}.txt
            ${OUTPUT_DIR}/data/${MATRIX}.txt
            COPYONLY
    )
endforeach()