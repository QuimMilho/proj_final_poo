
#include "CmdLiga.h"

CmdLiga::CmdLiga(Handler *handler) : Comando(handler) {}

int CmdLiga::execute(std::vector<std::string> *args)  {
    if (!handler->isGameRunning()) {
        std::cout << "Nenhum jogo está a decorrer de momento!\n";
        return 0;
    }
    if (args->size() == 2) {
        if (!handler->areCoordsValid(args->at(0), args->at(1)))
            return 0;

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdLiga::~CmdLiga() {}
