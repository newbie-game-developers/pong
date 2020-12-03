#ifndef DISPLAY_H
#define DISPLAY_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

class Display {
private:
void framebuffer_size_callback(GLFWwindow *window, int width, int height);

public:
GLFWwindow *create_window(int screenY, int screenX);
};

#endif