
#ifndef PROJ_FINAL_POO_CMDSAVE_H
#define PROJ_FINAL_POO_CMDSAVE_H

#include "../Comando.h"

class CmdSave : public Comando {
public:
    CmdSave(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdSave();

};


#endif //PROJ_FINAL_POO_CMDSAVE_H
