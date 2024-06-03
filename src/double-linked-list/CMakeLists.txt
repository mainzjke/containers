set(TARGET dll)
file (GLOB_RECURSE library-sources ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp)

foreach(source_file IN LISTS library-sources)
    set_source_files_properties(${source_file} PROPERTIES LANGUAGE CXX)
endforeach()

add_library(${TARGET} ${library-sources})
target_include_directories(${TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


