
#include "CmdLoad.h"

CmdLoad::CmdLoad(Handler *handler) : Comando(handler) {}

int CmdLoad::execute(std::vector<std::string> *args)  {
    if (args->size() == 3) {

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdLoad::~CmdLoad() {}