set(SRC_DIR_LIST
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/resolution
  ${CMAKE_CURRENT_SOURCE_DIR}/shapefunction
  ${CMAKE_CURRENT_SOURCE_DIR}/shapefunction/lagrange
  ${CMAKE_CURRENT_SOURCE_DIR}/shapefunction/hierarchical
  ${CMAKE_CURRENT_SOURCE_DIR}/shapefunction/hierarchical/h1
  ${CMAKE_CURRENT_SOURCE_DIR}/shapefunction/hierarchical/hcurl
  ${CMAKE_CURRENT_SOURCE_DIR}/mesh
  ${CMAKE_CURRENT_SOURCE_DIR}/formulation
  ${CMAKE_CURRENT_SOURCE_DIR}/field
  ${CMAKE_CURRENT_SOURCE_DIR}/io
  ${CMAKE_CURRENT_SOURCE_DIR}/io/nastran
  ${CMAKE_CURRENT_SOURCE_DIR}/io/paraview
  ${CMAKE_CURRENT_SOURCE_DIR}/io/gmsh
  ${CMAKE_CURRENT_SOURCE_DIR}/geometry
  ${CMAKE_CURRENT_SOURCE_DIR}/expression
  ${CMAKE_CURRENT_SOURCE_DIR}/expression/operation
  ${CMAKE_CURRENT_SOURCE_DIR}/gausspoint)


#custom_add_library_from_dir(sparselizardDLL "${SRC_DIR_LIST}" "sparselizard")
custom_add_static_library_from_dir(sparselizardLIB "${SRC_DIR_LIST}" "sparselizard")

#custom_copy_file(sparselizardDLL "${SRC_DIR_LIST}" "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/include" "*.h")
custom_copy_file(sparselizardLIB "${SRC_DIR_LIST}" "${PROJECT_SOURCE_DIR}/include" "*.h")
#custom_copy_file(sparselizardLIB "${SRC_DIR_LIST}" "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/include" "*.h")

#target_include_directories(sparselizardDLL PUBLIC ${SRC_DIR_LIST})
target_include_directories(sparselizardLIB PUBLIC ${SRC_DIR_LIST})

#target_compile_features(sparselizardDLL PRIVATE cxx_std_11)
#target_compile_options(sparselizardDLL PUBLIC -fPIC -no-pie -O3)
include_directories(C:/Hexadrive/Twin_fabrica++/dependencies/mf_interpolator/include)
include_directories(sparselizardLIB C:/Hexadrive/Twin_fabrica++/dependencies/units/units)

target_compile_features(sparselizardLIB PRIVATE cxx_std_20)
if (MSVC)
message("msvc!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
target_compile_options(sparselizardLIB PRIVATE /openmp /std:c++20 /Zc:preprocessor /bigobj /MP /W3)
else()
target_compile_options(sparselizardLIB PRIVATE -fPIC -no-pie -O3)
endif()

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -openmp /Za /std:c++20 /MP /Zc:preprocessor" )

#ConfigureBLAS(sparselizardDLL)
#ConfigureGMSH(sparselizardDLL)
#ConfigureMETIS(sparselizardDLL)
#ConfigureMPI(sparselizardDLL)
#ConfigureMUMPS(sparselizardDLL)
#ConfigurePETSC(sparselizardDLL)
#ConfigureSLEPC(sparselizardDLL)

ConfigureBLAS(sparselizardLIB)
  message(${CMAKE_BUILD_TYPE} "THIS IS THE CURRENT BUILD TYPE")
ConfigureGMSH(sparselizardLIB)
 message(${CMAKE_BUILD_TYPE} "THIS IS THE CURRENT BUILD TYPE")
ConfigureMETIS(sparselizardLIB)
 message(${CMAKE_BUILD_TYPE} "THIS IS THE CURRENT BUILD TYPE")
ConfigureMPI(sparselizardLIB)
ConfigureMUMPS(sparselizardLIB)
ConfigurePETSC(sparselizardLIB)
ConfigureSLEPC(sparselizardLIB)

# Optional for std::thread
# find_package(Threads)
# target_link_libraries(sparselizard PUBLIC ${CMAKE_THREAD_LIBS_INIT})

#if(NOT (${BLAS_FOUND} AND ${METIS_FOUND} AND ${MUMPS_FOUND} AND ${PETSC_FOUND} AND ${SLEPC_FOUND}))
#    message(FATAL_ERROR "\nAt least one required package (blas, metis, mumps, petsc, slepc) not found.")
#endif()

# set configure file
if(${BLAS_FOUND})
    add_definitions(-DHAVE_BLAS)
endif()
if(${GMSH_FOUND})
    add_definitions(-DHAVE_GMSH)
endif()
if(${METIS_FOUND})
    add_definitions(-DHAVE_METIS)
endif()
if(${MPI_FOUND})
    add_definitions(-DHAVE_MPI)
endif()
if(${MUMPS_FOUND})
    add_definitions(-DHAVE_MUMPS)
endif()
if(${PETSC_FOUND})
    add_definitions(-DHAVE_PETSC)
endif()
if(${SLEPC_FOUND})
    add_definitions(-DHAVE_SLEPC)
endif()

#target_include_directories(sparselizardDLL PUBLIC ${CMAKE_CURRENT_BINARY_DIR})
target_include_directories(sparselizardLIB PUBLIC ${CMAKE_CURRENT_BINARY_DIR})

#install(TARGETS sparselizardDLL)
#install(DIRECTORY "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/include/"
#        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/sparselizardDLL"
#        FILES_MATCHING PATTERN "*.h")
		
install(TARGETS sparselizardLIB)
install(DIRECTORY "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/include/"
        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/sparselizardLIB"
        FILES_MATCHING PATTERN "*.h")
