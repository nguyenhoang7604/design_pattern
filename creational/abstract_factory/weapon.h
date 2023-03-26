/*
    Author: TomNguyen
    Created: 6/Mar/2023
*/
#ifndef _WEAPON_
#define _WEAPON_

#include <iostream>

class Weapon
{
private:
    unsigned int atkDamage_;
public:
    Weapon(unsigned int atkDamage) { atkDamage_ = atkDamage; };
    ~Weapon() {}
    unsigned int getAtkDamage() { return atkDamage_; }
    virtual void attack()=0;
};

#endif //_WEAPON_
