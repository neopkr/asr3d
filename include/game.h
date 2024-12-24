#ifndef GAME_H
#define GAME_H

#include "fsys.h"
#include "engine/events.h"

#define PROJECT_TITLE "AlienShooter3D"
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

class CGame {
public:
    CGame();
    ~CGame();
    CFileManager cFile;
    CConfigReader cConfig;

    bool isGameOpenFirstTime = true;

    void Setup();
    void ReadLastConfiguration();
    void run();
private:
    CEngineEvents* pEvents;

};

#endif