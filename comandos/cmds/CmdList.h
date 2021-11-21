
#ifndef PROJ_FINAL_POO_CMDLIST_H
#define PROJ_FINAL_POO_CMDLIST_H

#include "../Comando.h"

class CmdList : public Comando {
public:
    CmdList(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdList();

};


#endif //PROJ_FINAL_POO_CMDLIST_H
