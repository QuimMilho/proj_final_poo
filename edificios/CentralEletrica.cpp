
#include "CentralEletrica.h"

CentralEletrica::CentralEletrica(Handler *handler) : Edificio(CEN_ELETRICA, 0, 1), handler(handler) {}

int CentralEletrica::finalDoDia() {

    return 0;
}

CentralEletrica::~CentralEletrica() {}