/*
    Author: TomNguyen
    Created: 6/Mar/2023
*/
#ifndef _TANKENEMYFACTORY_
#define _TANKENEMYFACTORY_

#include "enemy_ship_factory.h"
#include "weapon_rocket.h"
#include "engine_tank.h"

class TankEnemyFactory : public EnemyShipFactory
{
private:

public:
    TankEnemyFactory() {}
    ~TankEnemyFactory() {}
    std::shared_ptr<Weapon> addWeapon() {
        return  std::make_shared<RocketGun>(); // Specific to regular UFO
    }

    // Defines the engine object to associate with the ship

    std::shared_ptr<Engine> addEngine() {
        return  std::make_shared<TankEngine>(); // Specific to regular UFO
    }
};
#endif //_TANKENEMYFACTORY_