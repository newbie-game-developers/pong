#include "display.h"

GLFWwindow *Display::create_window() {
    GLFWwindow *win;
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    win = glfwCreateWindow(800,600, "My First Window", NULL, NULL);
    if (win == NULL) {
        std::cout <<"Error creating window!\n";
        glfwTerminate();
        
    }
        
    glfwMakeContextCurrent(win);
    glViewport(0,0,800,600);
    return win;

}