
#ifndef PROJ_FINAL_POO_CMDLVLUP_H
#define PROJ_FINAL_POO_CMDLVLUP_H

#include "../Comando.h"

class CmdLvlUp : public Comando {
public:
    CmdLvlUp(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdLvlUp();

};


#endif //PROJ_FINAL_POO_CMDLVLUP_H
