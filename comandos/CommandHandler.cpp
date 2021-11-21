
#include <vector>

#include "CommandHandler.h"
#include "cmds/CmdExec.h"
#include "cmds/CmdCons.h"

//Registar um comando
void CommandHandler::registerCmd(const std::string cmdName, Comando *cmd) {
    cmds.insert(std::pair<std::string, Comando*>(cmdName, cmd));
}

//Registar Comandos
void CommandHandler::registerCmds() {
    registerCmd("exec", new CmdExec(handler, this));
    registerCmd("cons", new CmdCons(handler));
}

//Executar comandos
void CommandHandler::executar(std::string cmd) {
    int i;
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
    if (!temp.empty())
        args.push_back(temp);
    if (cmds.count(cmdName) == 1) {
        int err = cmds.at(cmdName)->execute(&args);
        if (err != 0)
            std::cout << "Ocorreu um erro ao executar o comando " << cmdName << "!\n";
    } else {
        std::cout << "Comando inexistente!\n";
    }
}

//GETTERS

std::unordered_map<std::string, Comando*> CommandHandler::getCmds() const {
    return cmds;
}
