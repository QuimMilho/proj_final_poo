
#ifndef PROJ_FINAL_POO_CMDEXIT_H
#define PROJ_FINAL_POO_CMDEXIT_H

#include "../Comando.h"

class CmdExit : public Comando {
public:
    CmdExit(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdExit();

};

#endif //PROJ_FINAL_POO_CMDEXIT_H
