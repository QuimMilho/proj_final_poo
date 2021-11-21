
#include "CmdCrtZn.h"

CmdCrtZn::CmdCrtZn(Handler *handler) : Comando(handler) {}

int CmdCrtZn::execute(std::vector<std::string> *args)  {
    if (args->size() == 2) {

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdCrtZn::~CmdCrtZn() {}