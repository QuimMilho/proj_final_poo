
#include <vector>

#include "CommandHandler.h"

#include "cmds/CmdExec.h"
#include "cmds/CmdCons.h"
#include "cmds/CmdLiga.h"
#include "cmds/CmdDes.h"
#include "cmds/CmdMove.h"
#include "cmds/CmdVende.h"
#include "cmds/CmdCont.h"
#include "cmds/CmdList.h"
#include "cmds/CmdNext.h"
#include "cmds/CmdSave.h"
#include "cmds/CmdLoad.h"
#include "cmds/CmdApaga.h"
#include "cmds/CmdConfig.h"
#include "cmds/CmdLvlUp.h"
#include "cmds/CmdCrtZn.h"
#include "cmds/CmdExit.h"

#include "cmds/debug/CmdDebugCash.h"
#include "cmds/debug/CmdDebugEd.h"
#include "cmds/debug/CmdDebugKill.h"
#include "cmds/debug/CmdDebugLvlUp.h"

CommandHandler::CommandHandler(Handler *handler) : handler(handler) {}

//Registar um comando
void CommandHandler::registerCmd(const std::string cmdName, Comando *cmd) {
    cmds.insert(std::pair<std::string, Comando*>(cmdName, cmd));
}

//Registar Comandos
void CommandHandler::registerCmds() {
    //CMDS
    registerCmd("exec", new CmdExec(handler, this));
    registerCmd("cons", new CmdCons(handler));
    registerCmd("liga", new CmdLiga(handler));
    registerCmd("des", new CmdDes(handler));
    registerCmd("move", new CmdMove(handler));
    registerCmd("vende", new CmdVende(handler));
    registerCmd("cont", new CmdCont(handler));
    registerCmd("list", new CmdList(handler));
    registerCmd("next", new CmdNext(handler));
    registerCmd("save", new CmdSave(handler));
    registerCmd("load", new CmdLoad(handler));
    registerCmd("apaga", new CmdApaga(handler));
    registerCmd("config", new CmdConfig(handler));
    registerCmd("lvlup", new CmdLvlUp(handler));
    registerCmd("start", new CmdCrtZn(handler));
    //DEBUG
    registerCmd("debcash", new CmdDebugCash(handler));
    registerCmd("debed", new CmdDebugEd(handler));
    registerCmd("debkill", new CmdDebugKill(handler));
    registerCmd("deblvlup", new CmdDebugLvlUp(handler));
    //EXIT
    CmdExit *cmdExit = new CmdExit(handler);
    registerCmd("exit", cmdExit);
    registerCmd("quit", cmdExit);
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
                if (!temp.empty()) {
                    args.push_back(temp);
                    temp.assign("");
                }
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
