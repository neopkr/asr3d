#include "game.h"
#include "scenes/MenuScene.h"
#include "engine/vector.h"


CGame::CGame() : pEvents(new CEngineEvents()) {}

CGame::~CGame() {
    delete pEvents;
}

void CGame::Setup() {
    if (this->isGameOpenFirstTime == false) return;
    cFile.mkdir("data");
    cFile.mkdir("saves");

    // Cambiar a la escena inicial
    pEvents->pSceneManager->changeScene(std::make_unique<MenuScene>());
}

void CGame::run() {
    // Init
    pEvents->pWindow->InitWindowGL();
    std::cout << "Welcome to AlienShooter!!!!!" << std::endl;
    
    Setup();

    pEvents->pPlayer->Init();

    // Loop
    pEvents->pWindow->GameLoop([this](float deltaTime) {
        pEvents->pPlayer->Update();
        pEvents->pSceneManager->Update(deltaTime);
        pEvents->pSceneManager->Render();
    });
}
