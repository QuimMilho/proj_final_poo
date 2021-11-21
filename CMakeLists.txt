cmake_minimum_required(VERSION 3.20)
project(proj_final_poo)

set(CMAKE_CXX_STANDARD 14)

add_executable(proj_final_poo main.cpp comandos/CommandHandler.cpp comandos/CommandHandler.h comandos/Comando.cpp comandos/Comando.h comandos/cmds/CmdExec.cpp comandos/cmds/CmdExec.h Handler.cpp Handler.h comandos/cmds/CmdCons.cpp comandos/cmds/CmdCons.h)
