set(GLFW_BUILD_EXAMPLES OFF)
set(GLFW_BUILD_TESTS OFF)
set(GLFW_BUILD_DOCS OFF)

FetchContent_Declare(
  glfw
  GIT_REPOSITORY  https://github.com/glfw/glfw.git
  GIT_TAG         3.4
  GIT_SHALLOW     TRUE
)

FetchContent_MakeAvailable(glfw)

target_link_libraries(${PROJECT_NAME} PRIVATE glfw)