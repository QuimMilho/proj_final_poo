
#include "Hotel.h"

Hotel::Hotel(Handler *handler) : Edificio(EDIFIDIO_X, 5, 1), handler(handler) {}

int Hotel::finalDoDia() {

    return 0;
}

Hotel::~Hotel() {}