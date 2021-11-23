
#include "CmdCont.h"

CmdCont::CmdCont(Handler *handler) : Comando(handler) {}

int CmdCont::execute(std::vector<std::string> *args)  {
    if (args->size() == 1) {
        if (!handler->isValid(TRABALHADORES, args->at(0))) {
            std::cout << "Tens de inserir um tipo de trabalhador valido!";
            return 0;
        }

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdCont::~CmdCont() {}