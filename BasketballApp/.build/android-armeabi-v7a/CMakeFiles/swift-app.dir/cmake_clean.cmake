file(REMOVE_RECURSE
  "swift-lib-swift-app/swift-app.o"
  "libBasketballApp.pdb"
  "libBasketballApp.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/swift-app.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
