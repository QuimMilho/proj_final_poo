
#ifndef PROJ_FINAL_POO_HANDLER_H
#define PROJ_FINAL_POO_HANDLER_H

#include <vector>
#include <string>
#include "zonas/Zona.h"

#define ALL_TYPES "*"

//Edificios

#define EDIFICIO "edif"

#define MINA_FERRO "mnF"
#define MINA_CARVAO "mnC"
#define CEN_ELETRICA "elec"
#define BATERIA "bat"
#define FUNDICAO "fun"
#define EDIFIDIO_X "hot"

//Trabalhadores

#define TRABALHADORES "trab"

#define MINEIRO "minr"
#define LENHADOR "len"
#define OPERARIO "oper"

//Zonas

#define ZONAS "zone"

#define MONTANHA "mnt"
#define DESERTO "dsr"
#define PASTAGEM "pas"
#define FLORESTA "flr"
#define PANTANO "pnt"
#define ZONA_X "rav"

//Recursos

#define RECURSOS "recu"

#define FERRO "iron"
#define BARRA_ACO "stel"
#define CARVAO "coal"
#define MADEIRA "wood"
#define VIGAS_WOOD "vWod"
#define ELETRICIDADE "what"

class Handler {
private:
    //Preco Edificios
    int p_mnF = 10, up_mnF = 15;
    int p_mnC = 10, up_mnC = 10;
    int p_elec = 15;
    int p_bat = 10, up_bat = 5;
    int p_fun = 10;
    int p_hot = 30;
    //Preco Trabalhadores
    int p_oper = 15;
    int p_len = 20;
    int p_minr = 10;
    //Preco Vendas
    float v_iron = 1.0F;
    float v_stel = 2.0F;
    float v_coal = 1.0F;
    float v_wood = 1.0F;
    float v_vWod = 2.0F;
    float v_what = 1.5F;
public:
    bool isNumber(std::string text);
    bool isFloat(std::string text);
    bool isValid(std::string tipo, std::string text);
};


#endif //PROJ_FINAL_POO_HANDLER_H
