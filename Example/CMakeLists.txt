# CMakeList.txt : CMake project for GameCraftExample, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (GameCraftExample "src/main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET GameCraftAPI PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
target_link_libraries (GameCraftExample PRIVATE GameCraftAPI)

add_custom_command(TARGET GameCraftExample POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "$<TARGET_FILE:GameCraftAPI>"
        "$<TARGET_FILE_DIR:GameCraftExample>"
)