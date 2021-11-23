
#include "Bateria.h"

Bateria::Bateria(Handler *handler) : Edificio(BATERIA, 0, 5), handler(handler) {}

int Bateria::finalDoDia() {

    return 0;
}

Bateria::~Bateria() {}