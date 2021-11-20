cmake_minimum_required(VERSION 3.20)
project(proj_final_poo)

set(CMAKE_CXX_STANDARD 20)

add_executable(proj_final_poo main.cpp trabalhadores/Trabalhador.cpp trabalhadores/Trabalhador.h Jogo.cpp Jogo.h trabalhadores/Operario.cpp trabalhadores/Operario.h trabalhadores/Mineiro.cpp trabalhadores/Mineiro.h trabalhadores/Lenhador.cpp trabalhadores/Lenhador.h recursos/Recurso.cpp recursos/Recurso.h)
