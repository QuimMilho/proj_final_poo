
#include "Trabalhador.h"

//CONSTRUCTOR

Trabalhador::Trabalhador(int nTrabalhador, int diaContrato, int probDespedir, int minDespedir, int tempoTrabalho, int tempoFolga) {
    this->nTrabalhador = nTrabalhador;
    this->diaContrato = diaContrato;
    this->probDespedir = probDespedir;
    this->minDespedir = minDespedir;
    this->tempoTrabalho = tempoTrabalho;
    this->tempoFolga = tempoFolga;
    isWorking = true;
}

//GETTERS AND SETTERS

int Trabalhador::getNTrabalhador() const {
    return nTrabalhador;
}

int Trabalhador::getDiaContrato() const {
    return diaContrato;
}

int Trabalhador::getProbDespedir() const {
    return probDespedir;
}

int Trabalhador::getMinDespedir() const {
    return minDespedir;
}

int Trabalhador::getTempoTrabalho () const {
    return tempoTrabalho;
}

int Trabalhador::getTempoFolga () const {
    return tempoFolga;
}