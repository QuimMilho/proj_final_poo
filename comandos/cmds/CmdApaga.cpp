
#include <fstream>
#include "CmdApaga.h"

CmdApaga::CmdApaga(Handler *handler) : Comando(handler) {}

int CmdApaga::execute(std::vector<std::string> *args)  {
    if (args->size() == 1) {
        std::string path = "saves/" + args->at(0) + ".sav";
        std::ifstream file(path);
        if (!file.good()) {
            std::cout << "Esse ficheiro nao existe!";
            file.close();
            return 0;
        }
        file.close();
        std::remove(path.c_str());
    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdApaga::~CmdApaga() {}