
#ifndef PROJ_FINAL_POO_HOTEL_H
#define PROJ_FINAL_POO_HOTEL_H

#include "../Handler.h"

class Hotel : public Edificio {
private:
    Handler *handler;
public:
    Hotel(Handler *handler);

    int finalDoDia() override;

    virtual ~Hotel();
};

#endif //PROJ_FINAL_POO_HOTEL_H
