
#include "Zona.h"

Zona::Zona(std::string tipo) : tipo(tipo) {}

Zona::~Zona() {}

Edificio *Zona::getEdificio() const {
    return edificio;
}

int Zona::deleteBuilding() {
    if (edificio == nullptr)
        return 0;
    edificio = nullptr;
    return 1;
}

int Zona::addBuilding(std::string tipoEd) {
    if (edificio != nullptr) {
        return 1;
    }

    return 0;
}