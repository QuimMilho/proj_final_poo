
#ifndef PROJ_FINAL_POO_TRABALHADOR_H
#define PROJ_FINAL_POO_TRABALHADOR_H

#define LENHADOR "len"
#define MINEIRO "miner"
#define OPERARIO "oper"

#define B_LENHADOR "L"
#define B_MINEIRO "M"
#define B_OPERARIO "O"

class Trabalhador {

protected:
    int nTrabalhador, diaContrato, probDespedir, minDespedir, tempoTrabalho, tempoFolga;
    bool isWorking;

public:
    int getProbDespedir() const;

    int getMinDespedir() const;

    int getNTrabalhador() const;

    int getDiaContrato() const;

    int getTempoTrabalho () const;

    int getTempoFolga () const;

    bool isAvailable () const;

    void fimDoDia();

    Trabalhador(int nTrabalhador, int diaContrato, int probDespedir, int minDespedir, int tempoTrabalho, int tempoFolga);

};


#endif //PROJ_FINAL_POO_TRABALHADOR_H
