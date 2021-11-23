
#ifndef PROJ_FINAL_POO_FLORESTA_H
#define PROJ_FINAL_POO_FLORESTA_H

#include "Zona.h"
#include "../Handler.h"

class Floresta : public Zona {
private:
    Handler *handler;
public:
    Floresta(Handler *handler);
    int finalDoDia() override;
    virtual ~Floresta();
};

#endif //PROJ_FINAL_POO_FLORESTA_H
