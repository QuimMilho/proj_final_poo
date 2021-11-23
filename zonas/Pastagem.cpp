
#include "Pastagem.h"

Pastagem::Pastagem(Handler *handler) : Zona(PASTAGEM), handler(handler) {}

int Pastagem::finalDoDia() {

    return 0;
}

Pastagem::~Pastagem() {}