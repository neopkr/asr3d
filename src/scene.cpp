#include "scene.h"
#include "scenemanager.h"

void SceneManager::changeScene(std::unique_ptr<Scene> newScene) {
    if (currentScene) {
        currentScene->destroy();
    }

    currentScene = std::move(newScene);
    if (currentScene) {
        currentScene->init();
    }
}

void SceneManager::update(float deltaTime) {
    if(currentScene) {
        currentScene->update(deltaTime);
    }
}

void SceneManager::render() {
    if (currentScene) {
        currentScene->render();
    }
}