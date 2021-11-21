
#include "Handler.h"

Handler::Handler() {
    cmdHand = new CommandHandler;
    cmdHand->setHandler(this);
    cmdHand->registerCmds();
}

CommandHandler *Handler::getCmdHand() const {
    return cmdHand;
}