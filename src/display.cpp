#include "display.h"

GLFWwindow *Display::create_window(int screenY, int screenX) {
    GLFWwindow *win;
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    win = glfwCreateWindow(screenY,screenX, "Pong", NULL, NULL);
    if (win == NULL) {
        std::cout <<"Error creating window!\n";
        glfwTerminate();
        
    }
        
    glfwMakeContextCurrent(win);
    glViewport(0, 0, screenY, screenX);
    //Todo: Fix this to change window dimensions when user resizes window.
    //glfwSetFramebufferSizeCallback(win, framebuffer_size_callback);
    return win;

}

void Display::framebuffer_size_callback(GLFWwindow *window, int width, int height) {
    glViewport(0, 0, width, height);
}