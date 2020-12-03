#ifndef SYSTEM_H
#define SYSTEM_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

#include "display.h"
#include "input.h"

class System {
    private:
    //objects
    GLFWwindow *window;
    Display *display = new Display();
    Input *input = new Input();

    //functions
    void run();



    public:
    void init();
    

};


#endif