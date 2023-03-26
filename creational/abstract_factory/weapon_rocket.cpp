/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#include "weapon_rocket.h"

RocketGun::RocketGun()
 : Weapon(50)
{
    
}

RocketGun::~RocketGun()
{
}

void RocketGun::attack()
{
    std::cout << "Rocket's firing the Hero with " << this->getAtkDamage() <<  " damage" << std::endl;
}
