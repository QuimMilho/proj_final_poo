
#ifndef PROJ_FINAL_POO_CMDDEBUGCASH_H
#define PROJ_FINAL_POO_CMDDEBUGCASH_H

#include "../../Comando.h"

class CmdDebugCash : public Comando {
public:
    CmdDebugCash(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdDebugCash();

};


#endif //PROJ_FINAL_POO_CMDDEBUGCASH_H
