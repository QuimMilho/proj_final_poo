
#include "CmdVende.h"

CmdVende::CmdVende(Handler *handler) : Comando(handler) {}

int CmdVende::execute(std::vector<std::string> *args)  {
    if (args->size() == 2) {
        //VENDER RECURSOS
        if (handler->isValid(RECURSOS, args->at(0))) {
            if (!handler->isNumber(args->at(1))) {
                std::cout << "A quantidade tem de ser um numero valido!\n"; //ADICIONAR QUANTIDADES EXISTENTES
                return 0;
            }
            int a = std::stoi(args->at(0));
            if (a <= 0) {
                std::cout << "A quantidade tem de ser um numero positivo e dentro da quantidade existente!\n";
                return 0;
            }
            return 0;
        }
        //VENDER EDIFICIO
        if (!handler->areCoordsValid(args->at(0), args->at(1)))  //VERIFICAR SE EDIFICIO EXISTE
            return 0;

    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdVende::~CmdVende() {}