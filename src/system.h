#ifndef SYSTEM_H
#define SYSTEM_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

#include "display.h"

class System {
    private:
    //objects
    GLFWwindow *window;
    Display display;

    //functions
    void run();


    public:
    void init();
    

};


#endif