
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
    if (tipo == UPGRADES || tipo == ALL_TYPES) {
        if (text == UP_BATERIA || text == UP_MINA_CARVAO || text == UP_MINA_FERRO)
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
    } else if (n1 > linhas || n2 > colunas) {
        std::cout << "Os numeros devem estar dentro dos limites do tabuleiro!\n";
        return false;
    }
    return true;
}

int Handler::generateInt(int number) {
    return 0;
}

//GETTERS AND SETTERS

bool Handler::isGameRunning() const {
    return isRunning;
}

int Handler::getColuna() const {
    return colunas;
}

int Handler::getLinha() const {
    return linhas;
}

int Handler::getNumberOfWorkers() const {
    if (workers.empty())
        return 0;
    return (int) workers.size();
}

void Handler::setPMnF(int pMnF) {
    p_mnF = pMnF;
}

void Handler::setUpMnF(int upMnF) {
    up_mnF = upMnF;
}

void Handler::setPMnC(int pMnC) {
    p_mnC = pMnC;
}

void Handler::setUpMnC(int upMnC) {
    up_mnC = upMnC;
}

void Handler::setPElec(int pElec) {
    p_elec = pElec;
}

void Handler::setPBat(int pBat) {
    p_bat = pBat;
}

void Handler::setUpBat(int upBat) {
    up_bat = upBat;
}

void Handler::setPFun(int pFun) {
    p_fun = pFun;
}

void Handler::setPHot(int pHot) {
    p_hot = pHot;
}

void Handler::setPOper(int pOper) {
    p_oper = pOper;
}

void Handler::setPLen(int pLen) {
    p_len = pLen;
}

void Handler::setPMinr(int pMinr) {
    p_minr = pMinr;
}

void Handler::setVIron(float vIron) {
    v_iron = vIron;
}

void Handler::setVStel(float vStel) {
    v_stel = vStel;
}

void Handler::setVCoal(float vCoal) {
    v_coal = vCoal;
}

void Handler::setVWood(float vWood) {
    v_wood = vWood;
}

void Handler::setVVWod(float vVWod) {
    v_vWod = vVWod;
}

void Handler::setVWhat(float vWhat) {
    v_what = vWhat;
}

void Handler::setLinha(int linha) {
    linhas = linha;
}

void Handler::setColuna(int coluna) {
    colunas = coluna;
}
