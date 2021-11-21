
#ifndef PROJ_FINAL_POO_CMDDEBUGED_H
#define PROJ_FINAL_POO_CMDDEBUGED_H

#include "../../Comando.h"

class CmdDebugEd : public Comando {
public:
    CmdDebugEd(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdDebugEd();

};

#endif //PROJ_FINAL_POO_CMDDEBUGED_H
