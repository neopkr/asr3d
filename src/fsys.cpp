/*
FSYS: FileSystem
@neopkr
*/

#include "fsys.h"

void CFileManager::mkdir(const char *name)
{
    fs::create_directory(name);
}

struct CFileManager::ConfigPlayer
{
    char playerName[12];
    int money;
    int xp;
    std::string map;
};

std::map<std::string, std::string> CFileManager::CFGPlayerToMap(const ConfigPlayer &player)
{
    std::map<std::string, std::string> _temp;
    _temp["player"] = player.playerName;
    _temp["money"] = player.money;
    _temp["xp"] = player.xp;
    _temp["map"] = player.map;
    return _temp;
}

bool CFileManager::CFGPlayer(const char *_filename, struct ConfigPlayer _player)
{
    std::map<std::string, std::string> playerCfg = this->CFGPlayerToMap(_player);
    CConfigReader cfg;
    if (!cfg.write(_filename, playerCfg))
    {
        // Add a second system to prevent, create another cfg, or check the filename if correct.
        std::cerr << "Error creating the CFG Player!!! (" << _filename << ")" << std::endl;
        return false;
    }

    return true;
}