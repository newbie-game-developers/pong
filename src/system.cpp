#include "system.h"

void System::init() {
    window = display->create_window();
    run();
}

void System::run() {
    

    while(!glfwWindowShouldClose(window)) {
        input->process_input(window);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
}

void System::set_input_splash(Input *input) {
    //Polymorph derived Input to Class ScreenSplash
}

void System::set_input_game(Input *input) {
    //Polymorph derivced Input to Class ScreenGame
}