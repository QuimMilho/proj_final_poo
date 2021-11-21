
#ifndef PROJ_FINAL_POO_CMDEXEC_H
#define PROJ_FINAL_POO_CMDEXEC_H

#include "../Comando.h"

class CmdExec : public Comando {
private:
    Handler *handler;
public:
    CmdExec(Handler *handler);

    CmdExec(Handler *handler, Handler *handler1);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdExec();
};

#endif //PROJ_FINAL_POO_CMDEXEC_H
