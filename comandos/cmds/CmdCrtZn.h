
#ifndef PROJ_FINAL_POO_CMDCRTZN_H
#define PROJ_FINAL_POO_CMDCRTZN_H

#include "../Comando.h"

class CmdCrtZn : public Comando {
public:
    CmdCrtZn(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdCrtZn();

};


#endif //PROJ_FINAL_POO_CMDCRTZN_H
