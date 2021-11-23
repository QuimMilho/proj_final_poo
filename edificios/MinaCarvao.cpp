
#include "MinaCarvao.h"

MinaCarvao::MinaCarvao(Handler *handler) : Edificio(MINA_CARVAO, 10, 5), handler(handler) {}

int MinaCarvao::finalDoDia() {

    return 0;
}

MinaCarvao::~MinaCarvao() {}