
#include "Handler.h"

int main() {
    Handler handler;
    handler.getCmdHand()->registerCmds();
    std::cout << "Bem vindo ao Industries & Co.!\n" <<
            "Para começar cria um jogo ou carrega um a partir de um fichiro existente\n";
    bool loop = true;
    while (loop) {
        std::string str;
        std::cout << "Insira o comando:";
        std::getline(std::cin, str);
        handler.getCmdHand()->executar(str);
        if (str == "exit")
            loop = false;
    }
    return 0;
}
