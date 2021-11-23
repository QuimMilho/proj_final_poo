
#ifndef PROJ_FINAL_POO_CENTRALELETRICA_H
#define PROJ_FINAL_POO_CENTRALELETRICA_H

#include "../Handler.h"

class CentralEletrica : public Edificio {
private:
    Handler *handler;
public:
    CentralEletrica(Handler *handler);

    int finalDoDia() override;

    virtual ~CentralEletrica();
};

#endif //PROJ_FINAL_POO_CENTRALELETRICA_H
