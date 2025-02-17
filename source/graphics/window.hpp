#pragma once

#include <types.hpp>

#include <iostream>

namespace window
{
    GLFWwindow* init_window();
    void cleanUp_window(GLFWwindow* window);
    void framebuffer_size_callback(GLFWwindow* window, int width, int height);
} // namespace window
