//
// Created by jrodm on 11/20/2021.
//

#ifndef PROJ_FINAL_POO_TRABALHADORES_H
#define PROJ_FINAL_POO_TRABALHADORES_H


class trabalhadores {
protected:
    int n, d, preco, prob_despedir, min_despedir;
public:
    int getPreco() const;

    int getProbDespedir() const;

    int getMinDespedir() const;

public:
    int getN() const;

    int getD() const;

};


#endif //PROJ_FINAL_POO_TRABALHADORES_H
