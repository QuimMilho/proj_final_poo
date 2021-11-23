
#ifndef PROJ_FINAL_POO_MINACARVAO_H
#define PROJ_FINAL_POO_MINACARVAO_H

#include "../Handler.h"

class MinaCarvao : public Edificio {
private:
    Handler *handler;
public:
    MinaCarvao(Handler *handler);

    int finalDoDia() override;

    virtual ~MinaCarvao();
};


#endif //PROJ_FINAL_POO_MINACARVAO_H
