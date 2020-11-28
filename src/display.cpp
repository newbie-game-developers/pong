#include "display.h"

void Display::run() {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow *window = glfwCreateWindow(800,600, "My First Window", NULL, NULL);
    if (window == NULL) {
        std::cout <<"Error creating window!\n";
        glfwTerminate();
        
    }
    glfwMakeContextCurrent(window);
    glViewport(0,0,800,600);
    while(!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    
}