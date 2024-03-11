function(ConfigureBLAS TARGET)

message("${BLAS_PATH}/include")

find_package(OpenBLAS)

if(OpenBLAS_FOUND)
    message("OpenBLAS found!")

    # Include directories
    target_include_directories(${TARGET} PUBLIC ${OpenBLAS_INCLUDE_DIRS})

    # Link libraries
    target_link_libraries(${TARGET} PUBLIC ${OpenBLAS_LIBRARIES})

    SET(BLAS_FOUND YES PARENT_SCOPE)

else()
    message("OpenBLAS not found.")
endif()
return()

# Find blas headers:
FIND_PATH(BLAS_INCLUDE_PATH
    NAMES cblas.h
    PATHS
    "${BLAS_PATH}/include"
    NO_DEFAULT_PATH
    )
#get_filename_component(BLAS_INCLUDE_PATH "${BLAS_INCLUDE_PATH}" DIRECTORY )

if(BLAS_INCLUDE_PATH)
    message(STATUS "Blas header cblas.h found at " ${BLAS_INCLUDE_PATH})
else()
    message(STATUS "BLAS HEADER CBLAS.H NOT FOUND")
endif()


# Find blas library:
FIND_LIBRARY(BLAS_LIBRARIES
    NAMES libopenblas.lib
    PATHS
    "${BLAS_PATH}/lib"
    NO_DEFAULT_PATH
    )

if(BLAS_LIBRARIES)
    message(STATUS "Blas library found at " ${BLAS_LIBRARIES})
else()
    message(STATUS "BLAS LIBRARY NOT FOUND")
endif()


if(BLAS_INCLUDE_PATH AND BLAS_LIBRARIES)
    SET(BLAS_FOUND YES PARENT_SCOPE)

    TARGET_INCLUDE_DIRECTORIES(${TARGET} PUBLIC ${BLAS_INCLUDE_PATH})
    TARGET_LINK_LIBRARIES(${TARGET} PUBLIC ${BLAS_LIBRARIES})
endif()


endfunction(ConfigureBLAS)

