
#include "Zona.h"

//Cosntructor

Zona::Zona(std::string &tipo) : tipo(tipo) {
    edificio = "";
}

//GETTERS AND SETTERS

std::string Zona::getTipo() const {
    return tipo;
}

std::string Zona::getConst() const {
    return edificio;
}

void Zona::setEdificio(const std::string &edificio) {
    Zona::edificio = edificio;
}
