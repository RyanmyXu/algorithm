file(REMOVE_RECURSE
  "A_B.exe"
  "A_B.exe.manifest"
  "A_B.pdb"
  "CMakeFiles/A_B.dir/main.c.obj"
  "libA_B.dll.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang C)
  include(CMakeFiles/A_B.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
