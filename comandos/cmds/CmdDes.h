
#ifndef PROJ_FINAL_POO_CMDDES_H
#define PROJ_FINAL_POO_CMDDES_H


#include "../Comando.h"

class CmdDes : public Comando {
public:
    CmdDes(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdDes();

};


#endif //PROJ_FINAL_POO_CMDDES_H
