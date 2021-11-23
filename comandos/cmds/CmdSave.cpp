
#include <fstream>
#include "CmdSave.h"

CmdSave::CmdSave(Handler *handler) : Comando(handler) {}

int CmdSave::execute(std::vector<std::string> *args)  {
    if (args->size() == 1) {
        std::string path = "saves/" + args->at(0) + ".sav";
        std::ifstream file(path);
        if (file.good()) {
            std::string txt;
            std::cout << "Esse ficheiro ja existe! Tens a certeza que queres apagar o ficheiro?\n" <<
                         "Insere S ou qualquer outra coisa:";
            std::getline(std::cin, txt);
            if (txt != "S") {
                file.close();
                return 0;
            }
        }

        file.close();
    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdSave::~CmdSave() {}