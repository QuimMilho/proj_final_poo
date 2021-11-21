
#include "CmdNext.h"

CmdNext::CmdNext(Handler *handler) : Comando(handler) {}

int CmdNext::execute(std::vector<std::string> *args)  {
    if (args->empty()) {

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdNext::~CmdNext() {}