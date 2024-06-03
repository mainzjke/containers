file(REMOVE_RECURSE
  "../../../lib/liballocator.pdb"
  "../../../lib/liballocator.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/allocator.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
