
#ifndef PROJ_FINAL_POO_EDIFICIO_H
#define PROJ_FINAL_POO_EDIFICIO_H

#include <string>

class Edificio {
protected:
    int level = 1, probDesab, max_level;
    std::string tipo;
public:
    Edificio(std::string tipo, int probDesab, int max_level);

    virtual int upgrade() = 0;

    virtual int finalDoDia() = 0;

    virtual ~Edificio();
};

#endif //PROJ_FINAL_POO_EDIFICIO_H
