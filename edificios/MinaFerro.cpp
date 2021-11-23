
#include "MinaFerro.h"

MinaFerro::MinaFerro(Handler *handler) : Edificio(MINA_FERRO, 15, 5), handler(handler) {}

int MinaFerro::finalDoDia() {

    return 0;
}

MinaFerro::~MinaFerro() {}