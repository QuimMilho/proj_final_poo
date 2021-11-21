
#ifndef PROJ_FINAL_POO_COMANDO_H
#define PROJ_FINAL_POO_COMANDO_H

#include <string>
#include <iostream>
#include <vector>

class Comando {
public:
    virtual int execute(std::vector<std::string> *args) = 0;

    virtual ~Comando();
};


#endif //PROJ_FINAL_POO_COMANDO_H
