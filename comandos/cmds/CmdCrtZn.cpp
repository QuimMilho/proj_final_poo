
#include "CmdCrtZn.h"

CmdCrtZn::CmdCrtZn(Handler *handler) : Comando(handler) {}

int CmdCrtZn::execute(std::vector<std::string> *args)  {
    if (args->size() == 2) {
        bool isN1 = handler->isNumber(args->at(0)), isN2 = handler->isNumber(args->at(1));
        if (!isN1 && !isN2) {
            std::cout << "Ambos os argumentos devem ser numeros!\n";
            return 0;
        } else if (!isN1) {
            std::cout << "O primeiro argumento deve ser um numero!\n";
            return 0;
        } else if (!isN2) {
            std::cout << "O segundo argumento deve ser um numero!\n";
            return 0;
        }
    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdCrtZn::~CmdCrtZn() {}