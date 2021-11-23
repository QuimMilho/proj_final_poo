
#include <fstream>
#include "CmdConfig.h"

CmdConfig::CmdConfig(Handler *handler) : Comando(handler) {}

int CmdConfig::execute(std::vector<std::string> *args)  {
    if (args->size() == 1) {
        std::string path = "config/" + args->at(0) + ".cfg";
        std::ifstream file(path);
        if (!file.good()) {
            std::cout << "Esse ficheiro nao existe!";
            file.close();
            return 0;
        }

        file.close();
    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdConfig::~CmdConfig() {}