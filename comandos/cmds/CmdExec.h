
#ifndef PROJ_FINAL_POO_CMDEXEC_H
#define PROJ_FINAL_POO_CMDEXEC_H

#include "../Comando.h"
#include "../CommandHandler.h"

class CmdExec : public Comando {
private:
    CommandHandler *cmdHand;

public:
    int execute(std::vector<std::string> *args) override;

    virtual ~CmdExec();

    CmdExec(Handler *handler, CommandHandler *cmdHand);
};

#endif //PROJ_FINAL_POO_CMDEXEC_H
