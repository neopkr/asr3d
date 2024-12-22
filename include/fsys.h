#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <map>
#include <sstream>

namespace fs = std::filesystem;

class CFileManager
{
public:
    void mkdir(const char *name);
    /*
    @brief Remind terminate the name parameter with the extension ex: config1.cfg
    */
    struct ConfigPlayer;
    bool CFGPlayer(const char* _filename, struct ConfigPlayer _player);
private:
    std::map<std::string, std::string> CFGPlayerToMap(const ConfigPlayer& player);
};

class CConfigReader
{
private:
    std::map<std::string, std::string> config;
    std::string trim(const std::string &str)
    {
        size_t start = str.find_first_not_of(" \t\n\r");
        if (start == std::string::npos)
            return ""; // Cadena vacía si no hay contenido

        size_t end = str.find_last_not_of(" \t\n\r");
        return str.substr(start, end - start + 1);
    }

public:
    bool load(const std::string &fileName)
    {
        std::ifstream file(fileName);
        if (!file.is_open())
        {
            std::cerr << "File " << fileName << "can't be open!" << std::endl;
            return false;
        }

        std::string line;
        while (std::getline(file, line))
        {
            line = trim(line);
            if (line.empty() || line[0] == '#') continue;

            size_t delimiterPos = line.find('=');
            if (delimiterPos != std::string::npos) {
                std::string key = trim(line.substr(0, delimiterPos));
                std::string value = trim(line.substr(delimiterPos + 1));
                config[key] = value;
            }
        }

        file.close();
        return true;
    }

    std::string get(const std::string& key, const std::string& defaultValue = "") const {
        auto it = config.find(key);
        if (it != config.end()) {
            return it->second;
        }
        return defaultValue;
    }

    bool write(std::string file, std::map<std::string, std::string> _map) {
        std::ofstream _file(file);
        if (!_file.is_open()) {
            std::cerr << "Error CConfigReader::write: Can't write file " << file << std::endl;
            return false;
        }

        for (const auto &[key, value] : _map)
        {
            _file << key << "=" << value << "\n";
        }

        _file.close();
        std::cout << "CConfigReader::Write >> File " << file << " writted successfully.";
        return true;
    }
};