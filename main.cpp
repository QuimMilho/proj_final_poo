
#include "comandos/CommandHandler.h"

int main() {
    CommandHandler cmdHandler;
    cmdHandler.registerCmds();
    std::string str = "exec dxfcvb sfdxfgfc";
    cmdHandler.executar(str);
    return 0;
}
