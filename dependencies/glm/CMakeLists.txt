FetchContent_Declare(
  glm
  GIT_REPOSITORY  https://github.com/g-truc/glm.git
  GIT_TAG         2d4c4b4dd31fde06cfffad7915c2b3006402322f # SHA commit
  GIT_SHALLOW     TRUE
)

FetchContent_MakeAvailable(glm)

target_link_libraries(${PROJECT_NAME} PRIVATE glm::glm)