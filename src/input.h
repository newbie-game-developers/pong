#ifndef INPUT_H
#define INPUT_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Input {
private:

public:
virtual void process_input(GLFWwindow *window);

};

class ScreenSplash: public Input {
public:
virtual void process_input(GLFWwindow *window);
};

class ScreenGame: public Input {
public:
virtual void process_input(GLFWwindow *window);
};

#endif