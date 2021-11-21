
#include "CmdExec.h"

int CmdExec::execute(std::vector<std::string> *args) {
    if (args->size() == 1) {

    } else {
        std::cout << "O numero de argumentos do comando e invalido!";
    }
    return 0;
}

CmdExec::~CmdExec() {}