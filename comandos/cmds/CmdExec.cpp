
#include "CmdExec.h"
#include <fstream>

CmdExec::CmdExec(Handler *handler, CommandHandler *cmdHand) : Comando(handler), cmdHand(cmdHand) {}

int CmdExec::execute(std::vector<std::string> *args) {
    if (args->size() == 1) {
        std::string path = "cfg/" + args->at(0) + ".cfg";
        std::ifstream file(path);
        if (file.good()) {
            std::string text;
            while (getline (file, text)) {
                cmdHand->executar(text);
            }
        } else {
            std::cout << "Esse ficheiro nao existe!\n";
        }
        file.close();
    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdExec::~CmdExec() {}