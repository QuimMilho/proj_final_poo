
#ifndef PROJ_FINAL_POO_HANDLER_H
#define PROJ_FINAL_POO_HANDLER_H

#include "comandos/CommandHandler.h"

class Handler {
private:
    CommandHandler cmdHand;
public:
    CommandHandler getCmdHand() const;
    Handler();
};


#endif //PROJ_FINAL_POO_HANDLER_H
