set(TARGET vector)
set_source_files_properties(vector.hpp PROPERTIES LANGUAGE CXX HEADER_FILE_ONLY TRUE)

add_library(${TARGET} SHARED vector.hpp)
target_include_directories(${TARGET} PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(${TARGET} allocator)





