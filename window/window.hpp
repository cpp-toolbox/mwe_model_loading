#ifndef MWE_MODEL_LOADING_WINDOW_HPP
#define MWE_MODEL_LOADING_WINDOW_HPP

#include <iostream>
#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <optional>

std::optional<GLFWwindow *> initialize_glfw_and_return_window(const unsigned int screen_width, const unsigned int screen_height);

#endif //MWE_MODEL_LOADING_WINDOW_HPP