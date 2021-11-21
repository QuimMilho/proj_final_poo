
#include <vector>

#include "CommandHandler.h"
#include "cmds/CmdExec.h"

//Registar um comando
void CommandHandler::registerCmd(const std::string cmdName, Comando *cmd) {
    cmds.insert(std::pair<std::string, Comando*>(cmdName, cmd));
}

//Registar Comandos
void CommandHandler::registerCmds() {
    registerCmd("exec", new CmdExec());
}

//Executar comandos
void executar(const std::string cmd) {
    int i, k = 0;
    bool done = false;
    std::string cmdName, temp;
    std::vector<std::string> args;
    for (i = 0; i < cmd.size(); i++) {
        char c = cmd.at(i);
        if (!done) {
            if (c == ' ')
                done = true;
            else
                cmdName += c;
        } else {
            if (c == ' ') {
                args.push_back(temp);
                temp.assign("");
            } else
                temp += c;
        }
    }
}

//GETTERS

std::unordered_map<std::string, Comando*> CommandHandler::getCmds() const {
    return cmds;
}