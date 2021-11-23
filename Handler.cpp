
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

//GETTERS

bool Handler::isGameRunning() const {
    return isRunning;
}