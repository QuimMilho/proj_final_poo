
#include <fstream>
#include "CmdConfig.h"

CmdConfig::CmdConfig(Handler *handler) : Comando(handler) {}

int CmdConfig::execute(std::vector<std::string> *args)  {
    if (args->size() == 1) {
        std::string path = "config/" + args->at(0) + ".cfg";
        std::ifstream file(path);
        if (!file.good()) {
            std::cout << "Esse ficheiro nao existe!";
            file.close();
            return 0;
        }
        std::string text, txt, n;
        int l = 0;
        while (getline (file, text)) {
            int i;
            bool done = false;
            for (i = 0; i < text.size(); i++) {
                if (!done) {
                    if (text.at(i) != ' ')
                        txt += text.at(i);
                    else
                        done = true;
                } else {
                    if (text.at(i) != ' ')
                        n += txt += text.at(i);
                    else
                        break;
                }
            }
            if (!handler->isValid(ALL_TYPES, text)) {
                std::cout << "O codigo no ficheiro nao e valido! Linha:" << l;
                l++;
                continue;
            }
            if (!handler->isFloat(n) && !handler->isNumber(n)) {
                std::cout << "O numero no ficheiro nao e valido! Linha:" << l;
                l++;
                continue;
            }
            if (handler->isNumber(n)) {
                int n1 = std::stoi(n);
                if (n1 <= 0) {
                    std::cout << "O numero no ficheiro deve ser positivo! Linha:" << l;
                    l++;
                    continue;
                }
                if (txt == MINA_FERRO) {
                    handler->setPMnF(n1);
                    l++;
                    continue;
                } else if (txt == MINA_CARVAO) {
                    handler->setPMnC(n1);
                    l++;
                    continue;
                } else if (txt == UP_MINA_FERRO) {
                    handler->setUpMnF(n1);
                    l++;
                    continue;
                } else if (txt == UP_MINA_CARVAO) {
                    handler->setUpMnC(n1);
                    l++;
                    continue;
                } else if (txt == CEN_ELETRICA) {
                    handler->setPElec(n1);
                    l++;
                    continue;
                } else if (txt == BATERIA) {
                    handler->setPBat(n1);
                    l++;
                    continue;
                } else if (txt == UP_BATERIA) {
                    handler->setUpBat(n1);
                    l++;
                    continue;
                } else if (txt == FUNDICAO) {
                    handler->setPFun(n1);
                    l++;
                    continue;
                } else if (txt == EDIFIDIO_X) {
                    handler->setPHot(n1);
                    l++;
                    continue;
                } else if (txt == OPERARIO) {
                    handler->setPOper(n1);
                    l++;
                    continue;
                } else if (txt == MINEIRO) {
                    handler->setPMinr(n1);
                    l++;
                    continue;
                } else if (txt == LENHADOR) {
                    handler->setPLen(n1);
                    l++;
                    continue;
                }
            }
            if (handler->isFloat(n)) {
                float f = std::stof(n);
                if (txt == FERRO) {
                    handler->setVIron(f);
                    l++;
                    continue;
                } else if (txt == CARVAO) {
                    handler->setVCoal(f);
                    l++;
                    continue;
                } else if (txt == BARRA_ACO) {
                    handler->setVStel(f);
                    l++;
                    continue;
                } else if (txt == VIGAS_WOOD) {
                    handler->setVVWod(f);
                    l++;
                    continue;
                } else if (txt == MADEIRA) {
                    handler->setVWood(f);
                    l++;
                    continue;
                } else if (txt == ELETRICIDADE) {
                    handler->setVWhat(f);
                    l++;
                    continue;
                }
            }
            std::cout << "Esse elemento do ficheiro nao pode ser alterado! Linha:" << l;
            l++;
        }
        file.close();
    } else {
        std::cout << "O numero de argumentos do comando e invalido!\n";
    }
    return 0;
}

CmdConfig::~CmdConfig() {}