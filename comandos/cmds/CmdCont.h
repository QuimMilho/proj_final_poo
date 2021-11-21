
#ifndef PROJ_FINAL_POO_CMDCONT_H
#define PROJ_FINAL_POO_CMDCONT_H

#include "../Comando.h"

class CmdCont : public Comando {
public:
    CmdCont(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdCont();

};


#endif //PROJ_FINAL_POO_CMDCONT_H
