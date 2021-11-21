
#include "CmdDebugEd.h"

CmdDebugEd::CmdDebugEd(Handler *handler) : Comando(handler) {}

int CmdDebugEd::execute(std::vector<std::string> *args)  {
    if (args->size() == 3) {

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdDebugEd::~CmdDebugEd() {}