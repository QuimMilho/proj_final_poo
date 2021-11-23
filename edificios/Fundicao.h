
#ifndef PROJ_FINAL_POO_FUNDICAO_H
#define PROJ_FINAL_POO_FUNDICAO_H

#include "../Handler.h"

class Fundicao : public Edificio {
private:
    Handler *handler;
public:
    Fundicao(Handler *handler);

    int finalDoDia() override;

    virtual ~Fundicao();
};

#endif //PROJ_FINAL_POO_FUNDICAO_H
