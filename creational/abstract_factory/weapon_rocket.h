/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#ifndef _ROCKETGUN_
#define _ROCKETGUN_
#include "weapon.h"

class RocketGun : public Weapon
{

public:
    RocketGun();
    ~RocketGun();
    virtual void attack() override;
};

#endif //_ROCKETGUN_