
#ifndef PROJ_FINAL_POO_COMMANDHANDLER_H
#define PROJ_FINAL_POO_COMMANDHANDLER_H

#include <unordered_map>
#include <string>

#include "Comando.h"
#include "../Handler.h"

class CommandHandler {
private:
    //Lista de comandos
    std::unordered_map<std::string, Comando*> cmds;
    //Registar comandos
    void registerCmd(const std::string cmdName, Comando *cmd);
    Handler *handler;
public:
    //Registar todos os comandos
    void registerCmds();
    //Executar comandos
    void executar(std::string cmd);
    //GETTERS
    std::unordered_map<std::string, Comando*> getCmds() const;
};


#endif //PROJ_FINAL_POO_COMMANDHANDLER_H
