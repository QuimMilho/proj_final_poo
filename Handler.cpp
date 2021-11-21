
#include "Handler.h"

Handler::Handler() {
    cmdHand = new CommandHandler;
    cmdHand->setHandler(this);
    cmdHand->registerCmds();
}

CommandHandler *Handler::getCmdHand() const {
    return cmdHand;
}

bool Handler::isInGame() const {
    return inGame;
}

void Handler::switchInGame() {
    if (inGame)
        inGame = false;
    else
        inGame = true;
}