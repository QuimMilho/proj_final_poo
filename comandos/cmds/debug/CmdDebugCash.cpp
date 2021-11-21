
#include "CmdDebugCash.h"

CmdDebugCash::CmdDebugCash(Handler *handler) : Comando(handler) {}

int CmdDebugCash::execute(std::vector<std::string> *args)  {
    if (args->size() == 1) {

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdDebugCash::~CmdDebugCash() {}