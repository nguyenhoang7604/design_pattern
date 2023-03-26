/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#ifndef _ENEMYSHIPBUILDING_
#define _ENEMYSHIPBUILDING_

#include "enemy_ship.h"
#include "enemy_ship_building.h"
// #include "enemy_ship_ufo.h"
#include "enemy_ship_factory.h"
#include "ufo_enemy_ship_factory.h"
#include "tank_enemy_factory.h"
#include "plane_enemy_ship_factory.h"

// This acts as an ordering mechanism for creating
// EnemyShips that have a weapon, engine & name
// & nothing else

// The specific parts used for engine & weapon depend
// upon the String that is passed to this method

// When called a new EnemyShip is made. The specific parts
// are based on the String entered. After the ship is made
// we execute multiple methods in the EnemyShip Object
enum enemyShipType {UFO, PLANE, TANK};

class EnemyShipBuilding
{

public:
    EnemyShipBuilding();
    ~EnemyShipBuilding();
    std::shared_ptr<EnemyShip> orderTheShip(int typeOfEnemy);

protected:
    virtual std::shared_ptr<EnemyShip> makeEnemyShip(int typeOfEnemy);

};

#endif // _ENEMYSHIPBUILDING_