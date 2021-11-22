
#ifndef PROJ_FINAL_POO_TRABALHADOR_H
#define PROJ_FINAL_POO_TRABALHADOR_H

#include <string>
#include "../Handler.h"

class Trabalhador {
private:
    std::string tipo;
    int prob, min_desp, trab, folga;
    bool isWorking;
    Handler handler;
public:
    Trabalhador(Handler handler, std::string tipo, int prob, int min_desp, int trab, int folga);

    virtual void fimDoDia();

    virtual ~Trabalhador();
};


#endif //PROJ_FINAL_POO_TRABALHADOR_H
