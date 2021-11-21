
#include "CmdExit.h"

CmdExit::CmdExit(Handler *handler) : Comando(handler) {}

int CmdExit::execute(std::vector<std::string> *args)  {
    exit(0);
}

CmdExit::~CmdExit() {}