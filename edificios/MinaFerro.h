
#ifndef PROJ_FINAL_POO_MINAFERRO_H
#define PROJ_FINAL_POO_MINAFERRO_H

#include "../Handler.h"

class MinaFerro : public Edificio {
private:
    Handler *handler;
public:
    MinaFerro(Handler *handler);

    int finalDoDia() override;

    virtual ~MinaFerro();
};

#endif //PROJ_FINAL_POO_MINAFERRO_H
