
#ifndef PROJ_FINAL_POO_MONTANHA_H
#define PROJ_FINAL_POO_MONTANHA_H

#include "Zona.h"
#include "../Handler.h"

class Montanha : public Zona {
private:
    Handler *handler;
public:
    Montanha(Handler *handler);
    int finalDoDia() override;
    virtual ~Montanha();
};


#endif //PROJ_FINAL_POO_MONTANHA_H
