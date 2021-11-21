
#include <iostream>
#include "comandos/CommandHandler.h"

int main() {
    Handler handler;
    CommandHandler *cmdHand = new CommandHandler(&handler);
    cmdHand->registerCmds();
    std::cout << "Bem vindo ao Industries & Co.!\n" <<
            "Para comecar cria um jogo ou carrega um a partir de um fichiro existente\n";
    bool loop = true;
    while (loop) {
        std::string str;
        std::cout << "Insira o comando:";
        std::getline(std::cin, str);
        cmdHand->executar(str);
        if (str == "exit")
            loop = false;
    }
    return 0;
}
