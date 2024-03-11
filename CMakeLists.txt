# Thanks to S. Matsievskiy for bringing cmake to the project.

cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(Sparselizard LANGUAGES CXX)

#set(CMAKE_CXX_STANDARD 20)
#set(DEFAULT_BUILD_TYPE "Release")
#set(CMAKE_BUILD_TYPE "${DEFAULT_BUILD_TYPE}" CACHE STRING "Choose the type of build" FORCE)

message(${CMAKE_CURRENT_SOURCE_DIR}/../petsc/lib/${CMAKE_BUILD_TYPE}/ " where i AM SEARCHING FOR")
message($ENV{MKL_PATH})
set(PETSC_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../petsc/petsc" CACHE STRING "Provide the path to the petsc folder")
set(SLEPC_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../petsc/slepc" CACHE STRING "Provide the path to the petsc folder")
set(BLAS_PATH "C:/Hexadrive/vcpkg/installed/x64-windows/openblas" CACHE STRING "Provide the path to the petsc folder")
set(GMSH_PATH "~/SLlibs/gmsh" CACHE STRING "Provide the path to the gmsh folder")
set(MPI_PATH "$ENV{MPI_PATH}" CACHE STRING "Provide the path to the mpi folder")

# Place library in build folder:
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

# Default flags:
set(BLAS_FOUND NO)
set(GMSH_FOUND NO)
set(METIS_FOUND NO)
set(MPI_FOUND NO)
set(MUMPS_FOUND NO)
set(PETSC_FOUND NO)
set(SLEPC_FOUND NO)

# Installation definitions
include(GNUInstallDirs)

# Aux functions
include(cMake/functions.cmake)
include(cMake/SetupBLAS.cmake)
include(cMake/SetupGMSH.cmake)
include(cMake/SetupMETIS.cmake)
include(cMake/SetupMPI.cmake)
include(cMake/SetupMUMPS.cmake)
include(cMake/SetupPETSC.cmake)

include(cMake/SetupSLEPC.cmake)

# Add libsparselizard target
add_subdirectory(src)
# Add simulations targets
# add_subdirectory(simulations)

