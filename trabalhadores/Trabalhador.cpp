
#include "Trabalhador.h"

Trabalhador::Trabalhador(Handler handler, std::string tipo, int prob, int min_desp, int trab, int folga) :
        handler(handler), tipo(tipo), prob(prob), min_desp(min_desp), trab(trab), folga(folga) {
    isWorking = true;
}

Trabalhador::~Trabalhador() {

}
