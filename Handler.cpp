
#include "Handler.h"

bool Handler::isNumber(std::string text) {
    std::string::const_iterator it = text.begin();
    while (it != text.end() && std::isdigit(*it)) ++it;
    return !text.empty() && it == text.end();
}

bool Handler::isFloat(std::string text) {
    if (text.empty()) {
        return false;
    } else if (isNumber(text))
        return true;
    else {
        int i, ponto = 0;
        for (i = 0; i < text.size(); i++) {
            if (text.at(i) == '.') {
                if (ponto != 0) {
                    return false;
                } else {
                    ponto++;
                }
            } else if (!std::isdigit(text.at(i))) {
                return false;
            }
        }
    }
    return true;
}

bool Handler::isValid(std::string tipo, std::string text) {
    if (tipo == EDIFICIO || tipo == ALL_TYPES) {
        if (text == MINA_FERRO || text == MINA_CARVAO || text == CEN_ELETRICA || text == BATERIA || text == FUNDICAO ||
                text == EDIFIDIO_X)
            return true;
    }
    if (tipo == TRABALHADORES || tipo == ALL_TYPES) {
        if (text == MINEIRO || text == OPERARIO || text == LENHADOR)
            return true;
    }
    if (tipo == ZONAS || tipo == ALL_TYPES) {
        if (text == DESERTO || text == PASTAGEM || text == FLORESTA || text == MONTANHA || text == PANTANO ||
                text == ZONA_X)
            return true;
    }
    if (tipo == RECURSOS || tipo == ALL_TYPES) {
        if (text == FERRO || text == BARRA_ACO || text == CARVAO || text == MADEIRA || text == VIGAS_WOOD ||
                text == ELETRICIDADE)
            return true;
    }
    return false;
}

bool Handler::areCoordsValid(std::string linha, std::string coluna) {
    bool isN1 = isNumber(linha), isN2 = isNumber(coluna);
    if (!isN1 && !isN2) {
        std::cout << "Ambos os argumentos devem ser numeros!\n";
        return false;
    } else if (!isN1) {
        std::cout << "O primeiro argumento deve ser um numero!\n";
        return false;
    } else if (!isN2) {
        std::cout << "O segundo argumento deve ser um numero!\n";
        return false;
    }
    int n1 = std::stoi(linha), n2 = std::stoi(coluna);
    if (n1 <= 0 || n2 <= 0) {
        std::cout << "Os numeros nao podem ser negativos!\n";
        return false;
    } else if (n1 > y || n2 > x) {
        std::cout << "Os numeros devem estar dentro dos limites do tabuleiro!\n";
        return false;
    }
    return true;
}

//GETTERS

bool Handler::isGameRunning() const {
    return isRunning;
}

int Handler::getX() const {
    return x;
}

int Handler::getY() const {
    return y;
}

int Handler::getNumberOfWorkers() const {
    if (workers.empty())
        return 0;
    return (int) workers.size();
}