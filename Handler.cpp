
#include "Handler.h"

Handler::Handler() {
    cmdHand.setHandler(this);
    cmdHand.registerCmds();
}

CommandHandler Handler::getCmdHand() const {
    return cmdHand;
}