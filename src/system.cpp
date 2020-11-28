#include "system.h"

void System::init() {
    window = display.create_window();
    run();
}

void System::run() {

        while(!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
}