
#include "CmdExec.h"

CmdExec::CmdExec(Handler *handler, Handler *handler1) : Comando(handler), handler(handler) {}

int CmdExec::execute(std::vector<std::string> *args) {

    return 0;
}

CmdExec::~CmdExec() {}