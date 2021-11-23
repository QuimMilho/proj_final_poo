
#ifndef PROJ_FINAL_POO_DESERTO_H
#define PROJ_FINAL_POO_DESERTO_H

#include "Zona.h"
#include "../Handler.h"

class Deserto : public Zona{
private:
    Handler *handler;
public:
    Deserto(Handler *handler);

    int finalDoDia() override;

    ~Deserto();
};


#endif //PROJ_FINAL_POO_DESERTO_H
