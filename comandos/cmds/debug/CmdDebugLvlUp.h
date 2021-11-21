
#ifndef PROJ_FINAL_POO_CMDDEBUGLVLUP_H
#define PROJ_FINAL_POO_CMDDEBUGLVLUP_H

#include "../../Comando.h"

class CmdDebugLvlUp : public Comando {
public:
    CmdDebugLvlUp(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdDebugLvlUp();

};

#endif //PROJ_FINAL_POO_CMDDEBUGLVLUP_H
