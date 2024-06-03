file(REMOVE_RECURSE
  "../../../lib/libforward-list.pdb"
  "../../../lib/libforward-list.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/forward-list.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
