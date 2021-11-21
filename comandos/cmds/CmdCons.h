
#ifndef PROJ_FINAL_POO_CMDCONS_H
#define PROJ_FINAL_POO_CMDCONS_H

#include "../Comando.h"

class CmdCons : public Comando {
public:
    CmdCons(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdCons();

};


#endif //PROJ_FINAL_POO_CMDCONS_H
