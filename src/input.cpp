#include "input.h"


Input::Input() {
    inputP = screenSplash;
}
Input::~Input() {
    
}

void Input::process_input(GLFWwindow *window) {
    inputP->process_input(window);
}

void Input::set_input_screen(int input_screen) {
    //input_screen should be set to 0 for the Splash Screen and
    //set to 1 for the game screen.
    
    if (input_screen == 0) {
        inputP = screenSplash;
    }
    else if (input_screen == 1) {
        inputP = screenGame;
    }
}