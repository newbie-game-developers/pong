#include "system.h"

void System::init() {
    window = display->create_window(800,600);
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

