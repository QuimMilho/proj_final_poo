//
// Created by jrodm on 11/20/2021.
//

#ifndef PROJ_FINAL_POO_TRABALHADOR_H
#define PROJ_FINAL_POO_TRABALHADOR_H


class Trabalhador {

protected:
    int nTrabalhador, diaContrato, probDespedir, minDespedir, tempoTrabalho, tempoFolga;

public:
    int getProbDespedir() const;

    int getMinDespedir() const;

    int getNTrabalhador() const;

    int getDiaContrato() const;

    int getTempoTrabalho () const;

    int getTempoFolga () const;

    void fimDoDia();

    Trabalhador(int nTrabalhador, int diaContrato, int probDespedir, int minDespedir, int tempoTrabalho, int tempoFolga);

};


#endif //PROJ_FINAL_POO_TRABALHADOR_H
