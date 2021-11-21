
#ifndef PROJ_FINAL_POO_CMDVENDE_H
#define PROJ_FINAL_POO_CMDVENDE_H

#include "../Comando.h"

class CmdVende : public Comando {
public:
    CmdVende(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdVende();

};


#endif //PROJ_FINAL_POO_CMDVENDE_H
