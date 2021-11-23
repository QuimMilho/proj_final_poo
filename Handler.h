
#ifndef PROJ_FINAL_POO_HANDLER_H
#define PROJ_FINAL_POO_HANDLER_H

#include <vector>
#include <string>
#include "zonas/Zona.h"

//Edificios

#define MINA_FERRO "mnF"
#define MINA_CARVAO "mnC"
#define EST_ELETRICA "elec"
#define BATERIA "bat"
#define FUNDICAO "fun"
#define EDIFIDIO_X "hot"

//Trabalhadores

#define MINEIRO "miner"
#define LENHADOR "len"
#define OPERARIO "oper"

//Zonas

#define MONTANHA "mnt"
#define DESERTO "dsr"
#define PASTAGEM "pas"
#define FLORESTA "flr"
#define PANTANO "pnt"
#define ZONA_X "znX"

//Recursos

#define FERRO "iron"
#define BARRA_ACO "stel"
#define CARVAO "coal"
#define MADEIRA "wood"
#define VIGAS_WOOD "vWod"
#define ELETRICIDADE "what"

class Handler {
public:
    bool isNumber(std::string text);
};


#endif //PROJ_FINAL_POO_HANDLER_H
