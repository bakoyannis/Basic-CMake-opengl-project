add_library(glad STATIC "glad/gl.c")

target_include_directories(glad PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} PRIVATE glad)