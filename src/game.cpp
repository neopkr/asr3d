#include "game.h"
#include "scenes/MenuScene.h"
#include "engine/vector.h"

CGame::CGame() : pWindow(new WindowGL()), pSceneManager(new SceneManager()) {}

CGame::~CGame() {
    delete pWindow;
    delete pSceneManager;
}

void CGame::Setup() {
    if (this->isGameOpenFirstTime == false) return;
    cFile.mkdir("data");
    cFile.mkdir("saves");

    // Cambiar a la escena inicial
    pSceneManager->changeScene(std::make_unique<MenuScene>());
}

void CGame::run() {
    // Init
    pWindow->InitWindowGL();
    std::cout << "Welcome to AlienShooter!!!!!" << std::endl;
    Vector2* pointSize = new Vector2(.2f, .3f);
    Setup();

    // Loop
    pWindow->GameLoop([this](float deltaTime) {
        pSceneManager->update(deltaTime);
        pSceneManager->render();
    });
}
