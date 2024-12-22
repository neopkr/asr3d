#include "game.h"
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

CGame::CGame() {
    pWindow = new WindowGL();
}

CGame::~CGame() {
    delete pWindow;
}

void CGame::Setup() {
    if (this->isGameOpenFirstTime == false) return;
    cFile.mkdir("data");
    cFile.mkdir("saves");
}

void CGame::ReadLastConfiguration() {
    // Read config file
}

void CGame::run() {
    // Init
    pWindow->InitWindowGL();
    std::cout << "Welcome to AlienShooter!!!!!" << std::endl;
    Setup();
    // Loop
    pWindow->GameLoop();
}