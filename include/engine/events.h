#include "window.h"
#include "scenemanager.h"
#include "player.h"

class CEngineEvents {
public:
    // Pointers
    WindowGL* pWindow;
    SceneManager* pSceneManager;
    Player* pPlayer;

    // Functios
    void InitListener();
    void UpdateListener(float deltaTime);
    void RenderListener();
    ~CEngineEvents();
};