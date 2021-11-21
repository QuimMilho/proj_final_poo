
#include "CmdSave.h"

CmdSave::CmdSave(Handler *handler) : Comando(handler) {}

int CmdSave::execute(std::vector<std::string> *args)  {
    if (args->size() == 1) {

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdSave::~CmdSave() {}