#include "engine/events.h"

CEngineEvents::~CEngineEvents() {
    // Destroy pointers
    delete pWindow;
    delete pSceneManager;
    delete pPlayer;
}

void CEngineEvents::InitListener() {
    pWindow = new WindowGL();
    pSceneManager = new SceneManager();
    pPlayer = new Player(pWindow->_window);
}

void CEngineEvents::UpdateListener(float deltaTime) {
    pPlayer->Update();
    pSceneManager->Update(deltaTime);
}

void CEngineEvents::RenderListener() {
    pPlayer->Render();
    pSceneManager->Render();
}