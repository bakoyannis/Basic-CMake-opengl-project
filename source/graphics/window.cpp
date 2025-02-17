#include "window.hpp"

namespace window
{
    GLFWwindow* init_window() {
        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);  // (4).6
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);  // 4.(6)
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

        GLFWwindow* window = glfwCreateWindow(1280, 720, "My OpenGL Application", NULL, NULL);
        if (window == NULL) {
           printf("Failed to create GLFW window\n");
            glfwTerminate();
            return nullptr;
        }

        glfwSwapInterval(1); // V-sync
        glfwMakeContextCurrent(window);
        glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
        
        return window;
    }

    void cleanUp_window(GLFWwindow* window) {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
        glViewport(0, 0, width, height);
    }  
} // namespace window

