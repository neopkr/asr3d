#ifndef MENUSCENE_H
#define MENUSCENE_H

#include "gl/glew.h"
#include "scene.h"
#include <iostream>

class MenuScene : public Scene {
public:
    void Init() override {
        std::cout << "Initializing Menu Scene" << std::endl;
        // Load textures, config opengl, etc
    }

    void Update(float deltaTime) override {
        // MenuLogic, inputs
    }

    void Render() override {
        // Renderiza el menu
        glClearColor(0.1f, 0.2f, 0.3f, 1.0f); // Fondo azul
        glClear(GL_COLOR_BUFFER_BIT);
    }

    void Destroy() override {
        std::cout << "Cleaning up scene!" << std::endl;
    }
};

#endif