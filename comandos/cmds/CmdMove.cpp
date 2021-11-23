
#include "CmdMove.h"

CmdMove::CmdMove(Handler *handler) : Comando(handler) {}

int CmdMove::execute(std::vector<std::string> *args)  {
    if (args->size() == 3) {
        if (!handler->isNumber(args->at(0))) {
            std::cout << "O id de trabalhador tem de ser um numero!\n";
            return 0;
        }
        int nWorker = std::stoi(args->at(0));
        if (handler->getNumberOfWorkers() < nWorker || nWorker <= 0) {
            std::cout << "Esse trabalhador nao existe!\n";
        }
        if (!handler->areCoordsValid(args->at(1), args->at(2)))
            return 0;

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdMove::~CmdMove() {}