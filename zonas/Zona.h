
#ifndef PROJ_FINAL_POO_ZONA_H
#define PROJ_FINAL_POO_ZONA_H

#include <string>
#include <vector>

#include "../Handler.h"

class Zona {
private:
    std::string tipo, edificio;
    std::vector<int> listaTrab;
    Handler *handler;
public:
    Zona(Handler *handler);

    virtual void fimDoDia();

    virtual ~Zona();
};

#endif //PROJ_FINAL_POO_ZONA_H
