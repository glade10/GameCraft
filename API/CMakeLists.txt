# CMakeList.txt : CMake project for GameCraftAPI, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_library (GameCraftAPI SHARED   "src/Core.h" "src/Application/Application.cpp" "src/Application/Application.h" "src/Application/EntryPoint.h")
target_include_directories (GameCraftAPI PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET GameCraftAPI PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
target_compile_definitions(GameCraftAPI PRIVATE GC_EXPORT)
