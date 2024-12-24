#ifndef WINDOW_H
#define WINDOW_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <functional>

class WindowGL {
public:
    GLFWwindow* _window;
    void InitWindowGL();
    void GameLoop(const std::function<void(float)>& gameLogic);
    void SetWindowTitle(const char* windowTitle) { _windowTitle = windowTitle; }
    void SetScreenSize(int width = 800, int height = 600) { _width = width; _height = height; }

private:
    const char* _windowTitle;
    int _width = 800;
    int _height = 600;
};

#endif