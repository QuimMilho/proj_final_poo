
#include "Fundicao.h"

Fundicao::Fundicao(Handler *handler) : Edificio(FUNDICAO, 0, 1), handler(handler) {}

int Fundicao::finalDoDia() {

    return 0;
}

Fundicao::~Fundicao() {}