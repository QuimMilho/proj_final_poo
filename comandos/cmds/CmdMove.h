
#ifndef PROJ_FINAL_POO_CMDMOVE_H
#define PROJ_FINAL_POO_CMDMOVE_H

#include "../Comando.h"

class CmdMove : public Comando {
public:
    CmdMove(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdMove();

};


#endif //PROJ_FINAL_POO_CMDMOVE_H
