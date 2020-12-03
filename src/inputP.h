#ifndef INPUTP_H
#define INPUTP_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class InputP {
private:

public:
virtual void process_input(GLFWwindow *window);

};

class ScreenSplash: public InputP {
public:
void process_input(GLFWwindow *window);
};

class ScreenGame: public InputP {
public:
void process_input(GLFWwindow *window);
};

#endif