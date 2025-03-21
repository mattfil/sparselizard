# Add library for dirs
function(custom_add_library_from_dir TARGET DIRLIST NAME)
    foreach(d IN LISTS DIRLIST)
        file(GLOB SRC "${d}/*.cpp" "${d}/*.h" "${d}/*.hpp")
        list(APPEND TARGET_SRC ${SRC})
    endforeach()
    add_library(${TARGET} SHARED ${TARGET_SRC})
	set_target_properties(${TARGET} PROPERTIES OUTPUT_NAME ${NAME})
endfunction(custom_add_library_from_dir)

function(custom_add_static_library_from_dir TARGET DIRLIST NAME)
    foreach(d IN LISTS DIRLIST)
        file(GLOB SRC "${d}/*.cpp" "${d}/*.h" "${d}/*.hpp")
        list(APPEND TARGET_SRC ${SRC})
    endforeach()
    add_library(${TARGET} STATIC ${TARGET_SRC})
	set_target_properties(${TARGET} PROPERTIES OUTPUT_NAME ${NAME})
endfunction(custom_add_static_library_from_dir)

# Add executable for dirs
function(custom_add_executable_from_dir TARGET DIRLIST)
    foreach(d IN LISTS DIRLIST)
        file(GLOB SRC "${d}/*.cpp" "${d}/*.h" "${d}/*.hpp")
        list(APPEND TARGET_SRC ${SRC})
    endforeach()
    add_executable(${TARGET} ${TARGET_SRC})
endfunction(custom_add_executable_from_dir)

function(custom_copy_file TARGET FROMDIRS TODIR GLOBS)
    foreach(d IN LISTS FROMDIRS)
        foreach(g IN LISTS GLOBS)
            file(GLOB SRC "${d}/${g}")
            foreach(f IN LISTS SRC)
                string(REGEX REPLACE "^.*/" "" DEST ${f})
                configure_file(${f} ${TODIR}/${DEST} COPYONLY)
            endforeach()
        endforeach()
    endforeach()
endfunction(custom_copy_file)

function(custom_symlink_file TARGET FROMDIRS TODIR GLOBS)
    foreach(d IN LISTS FROMDIRS)
        foreach(g IN LISTS GLOBS)
            file(GLOB SRC "${d}/${g}")
            foreach(f IN LISTS SRC)
                get_filename_component(filename ${f} NAME)
                if(NOT ${filename} STREQUAL "CMakeLists.txt")
                    string(REGEX REPLACE "^.*/" "" DEST ${f})
                    file(CREATE_LINK ${f} ${TODIR}/${DEST} SYMBOLIC)
                endif()
            endforeach()
        endforeach()
    endforeach()
endfunction(custom_symlink_file)

