
#ifndef PROJ_FINAL_POO_ZONA_H
#define PROJ_FINAL_POO_ZONA_H

#include <string>

#define MONTANHA "mnt"
#define DESERTO "dsr"
#define PASTAGEM "pas"
#define FLORESTA "flr"
#define PANTANO "pnt"
#define ZONAX "znX"

class Zona {
private:
    std::string tipo;
public:
    std::string getTipo() const;
};


#endif //PROJ_FINAL_POO_ZONA_H
