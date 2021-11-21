
#ifndef PROJ_FINAL_POO_CMDCONFIG_H
#define PROJ_FINAL_POO_CMDCONFIG_H

#include "../Comando.h"

class CmdConfig : public Comando {
public:
    CmdConfig(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdConfig();

};


#endif //PROJ_FINAL_POO_CMDCONFIG_H
