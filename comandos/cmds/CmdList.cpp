
#include "CmdList.h"

CmdList::CmdList(Handler *handler) : Comando(handler) {}

int CmdList::execute(std::vector<std::string> *args)  {
    if (args->empty()) {

    } else if (args->size() == 2) {
        if (!handler->areCoordsValid(args->at(0), args->at(1)))
            return 0;

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdList::~CmdList() {}