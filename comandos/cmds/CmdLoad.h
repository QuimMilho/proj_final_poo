
#ifndef PROJ_FINAL_POO_CMDLOAD_H
#define PROJ_FINAL_POO_CMDLOAD_H

#include "../Comando.h"

class CmdLoad : public Comando {
public:
    CmdLoad(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdLoad();

};

#endif //PROJ_FINAL_POO_CMDLOAD_H
