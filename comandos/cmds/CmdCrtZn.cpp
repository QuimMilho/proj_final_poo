
#include "CmdCrtZn.h"

CmdCrtZn::CmdCrtZn(Handler *handler) : Comando(handler) {}

int CmdCrtZn::execute(std::vector<std::string> *args)  {
    if (args->size() == 2) {
        if (!handler->areCoordsValid(args->at(0), args->at(1)))
            return 0;
        int coluna = std::stoi(args->at(1)), linha = std::stoi(args->at(0));
        handler->setColuna(coluna);
        handler->setLinha(linha);
        int i;
        for (i = 0; i < coluna * linha; i++) {

        }
    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdCrtZn::~CmdCrtZn() {}