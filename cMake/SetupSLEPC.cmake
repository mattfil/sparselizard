function(ConfigureSLEPC TARGET)


# Find SLEPC headers:
FIND_PATH(SLEPC_INCLUDE_PATH
    NAMES slepc.h
    PATHS
    "${SLEPC_PATH}/include"
    NO_DEFAULT_PATH
    )

if(SLEPC_INCLUDE_PATH)
    message(STATUS "SLEPC header SLEPC.h found at " ${SLEPC_INCLUDE_PATH})
else()
    message(STATUS "SLEPC HEADER SLEPC.H NOT FOUND")
endif()

FIND_PATH(SLEPCCONF_INCLUDE_PATH
    NAMES slepcconf.h
    PATHS
    "${SLEPC_PATH}/arch-linux-c-opt/include"
    "${SLEPC_PATH}/arch-linux2-c-opt/include"
    "${SLEPC_PATH}/arch-darwin-c-opt/include"
	"${SLEPC_PATH}/arch-mswin-c-opt/include"
    NO_DEFAULT_PATH
    )
#get_filename_component(SLEPCCONF_INCLUDE_PATH "${SLEPCCONF_INCLUDE_PATH}" DIRECTORY )

if(SLEPCCONF_INCLUDE_PATH)
    message(STATUS "SLEPC header SLEPCconf.h found at " ${SLEPCCONF_INCLUDE_PATH})
else()
    message(STATUS "SLEPC HEADER SLEPCCONF.H NOT FOUND")
endif()

# Find SLEPC library:
FIND_FILE(SLEPC_LIBRARIES
    NAMES libslepc.lib
    PATHS
    "${SLEPC_PATH}/arch-linux-c-opt/lib"
    "${SLEPC_PATH}/arch-linux2-c-opt/lib"
    "${SLEPC_PATH}/arch-darwin-c-opt/lib"
	"${SLEPC_PATH}/arch-mswin-c-opt/lib"
    NO_DEFAULT_PATH
    )

if(SLEPC_LIBRARIES)
    message(STATUS "SLEPC library found at " ${SLEPC_LIBRARIES})
else()
    message(STATUS "SLEPC LIBRARY NOT FOUND")
endif()


if(SLEPC_INCLUDE_PATH AND SLEPCCONF_INCLUDE_PATH AND SLEPC_LIBRARIES)
    SET(SLEPC_FOUND YES PARENT_SCOPE)

    TARGET_INCLUDE_DIRECTORIES(${TARGET} PUBLIC ${SLEPC_INCLUDE_PATH} ${SLEPCCONF_INCLUDE_PATH})
    TARGET_LINK_LIBRARIES(${TARGET} PUBLIC ${SLEPC_LIBRARIES})
endif()


endfunction(ConfigureSLEPC)

