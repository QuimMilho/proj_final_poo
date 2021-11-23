
#ifndef PROJ_FINAL_POO_PASTAGEM_H
#define PROJ_FINAL_POO_PASTAGEM_H

#include "Zona.h"
#include "../Handler.h"

class Pastagem : public Zona {
private:
    Handler *handler;
public:
    Pastagem(Handler *handler);
    int finalDoDia() override;
    virtual ~Pastagem();
};


#endif //PROJ_FINAL_POO_PASTAGEM_H
