set(TARGET allocator)
set_source_files_properties(allocator.hpp PROPERTIES LANGUAGE CXX HEADER_FILE_ONLY TRUE)

add_library(${TARGET} SHARED allocator.hpp)
target_include_directories(${TARGET} PRIVATE ${PROJECT_SOURCE_DIR}/include)
