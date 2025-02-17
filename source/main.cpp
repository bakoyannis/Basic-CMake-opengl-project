#include "types.hpp"

#include "graphics/window.hpp"

int main() {
    GLFWwindow* window = window::init_window();

    int version = gladLoadGL(glfwGetProcAddress);
    if (version == 0) {
        printf("Failed to initialize OpenGL context\n");
        return -1;
    }
    printf("Loaded OpenGL %d.%d\n", GLAD_VERSION_MAJOR(version), GLAD_VERSION_MINOR(version));

    glViewport(0, 0, 1280, 720);
    
    while(!glfwWindowShouldClose(window)) {
        glfwPollEvents();

        glClearColor(0.0f, 0.5f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
    }

    window::cleanUp_window(window);
}