#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Triangle {
    private:
    unsigned int VBO;


    public:
    Triangle();
    ~Triangle();
    void displayTriangle();

    float vertices[9] = {
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        0.0f,  0.5f, 0.0f};

    const char* vertexShaderSource = "#version 330 core\n""layout (location = 0) in vec3 aPos;\n""void main()\n""{\n"" gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n""}\0";
    unsigned int vertexShader;
    
    const char *fragmentShaderSource = "#version 330 core\nout vec4 FragColor;\nvoid main()\n{FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);";
    unsigned int fragmentShader;

    unsigned int shaderProgram;
    
};



#endif