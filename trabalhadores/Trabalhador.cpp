//
// Created by jrodm on 11/20/2021.
//

#include "Trabalhador.h"

int Trabalhador::getN() const {
    return n;
}

int Trabalhador::getD() const {
    return d;
}

int Trabalhador::getPreco() const {
    return preco;
}

int Trabalhador::getProbDespedir() const {
    return prob_despedir;
}

int Trabalhador::getMinDespedir() const {
    return min_despedir;
}

int Trabalhador::getTempoTrabalho () const {
    return tempo_trabalho;
}

int Trabalhador::getTempoFolga () const {
    return tempo_folga;
}