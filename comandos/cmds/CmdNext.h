
#ifndef PROJ_FINAL_POO_CMDNEXT_H
#define PROJ_FINAL_POO_CMDNEXT_H

#include "../Comando.h"

class CmdNext : public Comando {
public:
    CmdNext(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdNext();

};


#endif //PROJ_FINAL_POO_CMDNEXT_H
