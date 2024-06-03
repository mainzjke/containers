file(REMOVE_RECURSE
  "../../../lib/libvector.pdb"
  "../../../lib/libvector.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/vector.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
