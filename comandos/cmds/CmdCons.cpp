
#include "CmdCons.h"

CmdCons::CmdCons(Handler *handler) : Comando(handler) {}

int CmdCons::execute(std::vector<std::string> *args)  {
    if (!handler->isGameRunning()) {
        std::cout << "Nenhum jogo está a decorrer de momento!\n";
        return 0;
    }
    if (args->size() == 3) {
        if (!handler->isValid(EDIFICIO, args->at(0))) {
            std::cout << "O tipo de edificio inserido nao e valido!\n";
            return 0;
        }
        if (!handler->areCoordsValid(args->at(1), args->at(2)))
            return 0;

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdCons::~CmdCons() {}