/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#ifndef _LAZERGUN_
#define _LAZERGUN_
#include "weapon.h"

class LazerGun : public Weapon
{

public:
    LazerGun();
    ~LazerGun();
    virtual void attack() override;
};

#endif //_LAZERGUN_