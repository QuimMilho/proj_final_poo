
#ifndef PROJ_FINAL_POO_RAVINA_H
#define PROJ_FINAL_POO_RAVINA_H

#include "Zona.h"
#include "../Handler.h"

class Ravina : public Zona {
private:
    Handler *handler;
public:
    Ravina(Handler *handler);
    int finalDoDia() override;
    virtual ~Ravina();
};

#endif //PROJ_FINAL_POO_RAVINA_H
