
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