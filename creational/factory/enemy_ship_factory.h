/*
    Author: TomNguyen
    Created: 6/Mar/2023
*/
#ifndef _ENEMYSHIPFACTORY_
#define _ENEMYSHIPFACTORY_

#include <memory>
#include "ufo_enemy_ship.h"
#include "rocket_enemy_ship.h"
#include "lazer_enemy_ship.h"

enum enemyShipType {UFO, LAZER, ROCKET};

class EnemyShipFactory
{
private:

public:
    EnemyShipFactory();
    ~EnemyShipFactory();
    std::shared_ptr<EnemyShip> makeEnemyShip(int);
};


#endif // _ENEMYSHIPFACTORY_
