
#ifndef PROJ_FINAL_POO_ZONA_H
#define PROJ_FINAL_POO_ZONA_H

#include <list>
#include <string>
#include "../edificios/Edificio.h"

class Zona {
protected:
    std::list<int> trabalhadores;
    Edificio *edificio = nullptr;
    std::string tipo;
public:
    Zona(std::string tipo);
    virtual int finalDoDia() = 0;
    virtual ~Zona();
    Edificio *getEdificio() const;
    int deleteBuilding();
    virtual int addBuilding(std::string tipoEd);
    bool hasBuilding();
};

#endif //PROJ_FINAL_POO_ZONA_H
