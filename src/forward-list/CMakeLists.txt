set(TARGET forward-list)
set_source_files_properties(forward-list.hpp PROPERTIES LANGUAGE CXX HEADER_FILE_ONLY TRUE)

add_library(${TARGET} SHARED forward-list.hpp)
target_include_directories(${TARGET} PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(${TARGET} allocator)



