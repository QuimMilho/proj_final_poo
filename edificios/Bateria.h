
#ifndef PROJ_FINAL_POO_BATERIA_H
#define PROJ_FINAL_POO_BATERIA_H

#include "../Handler.h"

class Bateria : public Edificio {
private:
    Handler *handler;
public:
    Bateria(Handler *handler);

    int finalDoDia() override;

    virtual ~Bateria();
};

#endif //PROJ_FINAL_POO_BATERIA_H
