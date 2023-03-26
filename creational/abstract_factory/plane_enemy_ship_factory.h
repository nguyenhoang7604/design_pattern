/*
    Author: TomNguyen
    Created: 6/Mar/2023
*/
#ifndef _PLANEENEMYSHIPFACTORY_
#define _PLANEENEMYSHIPFACTORY_

#include <memory>
#include "enemy_ship_factory.h"
#include "weapon_rocket.h"
#include "engine_plane.h"

class LazerGun;
class UfoEngine;

class PlaneEnemyShipFactory : public EnemyShipFactory
{
private:

public:
    PlaneEnemyShipFactory() {}
    ~PlaneEnemyShipFactory() {}
	std::shared_ptr<Weapon> addWeapon() {
		return  std::make_shared<RocketGun>(); // Specific to regular Rocket Plane Enemy
	}

	// Defines the engine object to associate with the ship
	
	std::shared_ptr<Engine> addEngine() {
		return  std::make_shared<PlaneEngine>(); // Specific to regular Rocket Plane Enemy
	}
};

#endif // _PLANEENEMYSHIPFACTORY_
