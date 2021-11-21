
#ifndef PROJ_FINAL_POO_HANDLER_H
#define PROJ_FINAL_POO_HANDLER_H

#include "comandos/CommandHandler.h"

class Handler {
private:
    CommandHandler *cmdHand;
    bool inGame;
public:
    CommandHandler *getCmdHand() const;
    Handler();
    bool isInGame() const;
    void switchInGame();
};


#endif //PROJ_FINAL_POO_HANDLER_H
