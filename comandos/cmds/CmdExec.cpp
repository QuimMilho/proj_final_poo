
#include "CmdExec.h"

CmdExec::CmdExec(Handler *handler, CommandHandler *cmdHand) : Comando(handler), cmdHand(cmdHand) {}

int CmdExec::execute(std::vector<std::string> *args) {
    if (args->size() == 1) {

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdExec::~CmdExec() {}