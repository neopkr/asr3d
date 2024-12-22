#include "window.h"

void WindowGL::InitWindowGL() {
    if (!glfwInit()) {
        std::cerr << "Error: GLFW can't be initialized!" << std::endl;
        exit(EXIT_FAILURE);
    }

    _window = glfwCreateWindow(800, 600, "Alien Shooter", nullptr, nullptr);
    if (!_window) {
        std::cerr << "Error: Window can't be created!" << std::endl;
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(_window);

    if (glewInit() != GLEW_OK) {
        std::cerr << "Error: GLEW can't be initialized." << std::endl;
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glEnable(GL_DEPTH_TEST);
}

void WindowGL::GameLoop() {
    while (!glfwWindowShouldClose(_window)) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Draw

        glfwSwapBuffers(_window);
        glfwPollEvents();
    }

    glfwDestroyWindow(_window);
    glfwTerminate();
}