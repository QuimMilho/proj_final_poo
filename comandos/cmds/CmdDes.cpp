
#include "CmdDes.h"

CmdDes::CmdDes(Handler *handler) : Comando(handler) {}

int CmdDes::execute(std::vector<std::string> *args)  {
    if (args->size() == 2) {

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdDes::~CmdDes() {}