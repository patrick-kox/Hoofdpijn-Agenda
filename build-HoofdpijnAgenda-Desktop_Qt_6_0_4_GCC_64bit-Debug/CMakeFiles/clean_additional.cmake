# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/HoofdpijnAgenda_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/HoofdpijnAgenda_autogen.dir/ParseCache.txt"
  "HoofdpijnAgenda_autogen"
  )
endif()
