
#include <fstream>
#include "CmdLoad.h"

CmdLoad::CmdLoad(Handler *handler) : Comando(handler) {}

int CmdLoad::execute(std::vector<std::string> *args)  {
    if (args->size() == 1) {
        std::string path = "saves/" + args->at(0) + ".sav";
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

CmdLoad::~CmdLoad() {}