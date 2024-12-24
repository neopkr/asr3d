#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include <memory>

class Scene;

class SceneManager {
private:
    std::unique_ptr<Scene> currentScene;
public:
    void changeScene(std::unique_ptr<Scene> newScene);
    void update(float deltaTime);
    void render();
};

#endif