
#ifndef PROJ_FINAL_POO_CMDLIGA_H
#define PROJ_FINAL_POO_CMDLIGA_H

#include "../Comando.h"

class CmdLiga : public Comando {
public:
    CmdLiga(Handler *handler);

    int execute(std::vector<std::string> *args) override;

    virtual ~CmdLiga();

};


#endif //PROJ_FINAL_POO_CMDLIGA_H
