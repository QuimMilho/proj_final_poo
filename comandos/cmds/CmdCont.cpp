
#include "CmdCont.h"

CmdCont::CmdCont(Handler *handler) : Comando(handler) {}

int CmdCont::execute(std::vector<std::string> *args)  {
    if (args->size() == 1) {

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdCont::~CmdCont() {}