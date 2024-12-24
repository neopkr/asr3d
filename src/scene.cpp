#include "scene.h"
#include "scenemanager.h"

void SceneManager::changeScene(std::unique_ptr<Scene> newScene) {
    if (currentScene) {
        currentScene->Destroy();
    }

    currentScene = std::move(newScene);
    if (currentScene) {
        currentScene->Init();
    }
}

void SceneManager::Update(float deltaTime) {
    if(currentScene) {
        currentScene->Update(deltaTime);
    }
}

void SceneManager::Render() {
    if (currentScene) {
        currentScene->Render();
    }
}