
#include "CmdDebugKill.h"

CmdDebugKill::CmdDebugKill(Handler *handler) : Comando(handler) {}

int CmdDebugKill::execute(std::vector<std::string> *args)  {
    if (args->size() == 1) {

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdDebugKill::~CmdDebugKill() {}