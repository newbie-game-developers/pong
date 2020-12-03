#ifndef INPUT_H
#define INPUT_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "inputP.h"

class Input {
private:
InputP *inputP;
InputP *screenSplash = new ScreenSplash();
InputP *screenGame = new ScreenGame();

public:
Input();
~Input();
void set_input_screen(int input_screen);
void process_input(GLFWwindow *window);

};

#endif