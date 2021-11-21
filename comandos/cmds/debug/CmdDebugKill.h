
#ifndef PROJ_FINAL_POO_CMDDEBUGKILL_H
#define PROJ_FINAL_POO_CMDDEBUGKILL_H

#include "../../Comando.h"

class CmdDebugKill : public Comando {
public:
    CmdDebugKill(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdDebugKill();

};


#endif //PROJ_FINAL_POO_CMDDEBUGKILL_H
