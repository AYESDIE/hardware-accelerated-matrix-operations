set(KERNELS
    kernel)

foreach(KERNEL IN ITEMS ${KERNELS})
    configure_file(
        ${CMAKE_CURRENT_SOURCE_DIR}/${KERNEL}.cl
        ${OUTPUT_DIR}/kernel/${KERNEL}.cl
        COPYONLY
    )
endforeach()