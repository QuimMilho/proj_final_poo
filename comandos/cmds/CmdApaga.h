
#ifndef PROJ_FINAL_POO_CMDAPAGA_H
#define PROJ_FINAL_POO_CMDAPAGA_H

#include "../Comando.h"

class CmdApaga : public Comando {
public:
    CmdApaga(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdApaga();

};

#endif //PROJ_FINAL_POO_CMDAPAGA_H
