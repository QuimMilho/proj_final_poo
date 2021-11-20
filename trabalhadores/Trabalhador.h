//
// Created by jrodm on 11/20/2021.
//

#ifndef PROJ_FINAL_POO_TRABALHADOR_H
#define PROJ_FINAL_POO_TRABALHADOR_H


class Trabalhador {

protected:
    int n, d, preco, prob_despedir, min_despedir, tempo_trabalho, tempo_folga;

public:
    int getPreco() const;

    int getProbDespedir() const;

    int getMinDespedir() const;

    int getN() const;

    int getD() const;

    int getTempoTrabalho () const;

    int getTempoFolga () const;

    void fimDoDia();

};


#endif //PROJ_FINAL_POO_TRABALHADOR_H
