/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#include "weapon_lazer.h"

LazerGun::LazerGun()
 : Weapon(100)
{
    
}

LazerGun::~LazerGun()
{
}

void LazerGun::attack()
{
    std::cout << "Lazer's firing the Hero with " << this->getAtkDamage() <<  " damage" << std::endl;
}


