
#ifndef PROJ_FINAL_POO_PANTANO_H
#define PROJ_FINAL_POO_PANTANO_H

#include "Zona.h"
#include "../Handler.h"

class Pantano : public Zona {
private:
    Handler *handler;
public:
    Pantano(Handler *handler);
    int finalDoDia() override;
    virtual ~Pantano();
};


#endif //PROJ_FINAL_POO_PANTANO_H
