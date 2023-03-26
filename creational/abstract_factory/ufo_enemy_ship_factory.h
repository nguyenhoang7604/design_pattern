/*
    Author: TomNguyen
    Created: 6/Mar/2023
*/
#ifndef _UFOENEMYSHIPFACTORY_
#define _UFOENEMYSHIPFACTORY_

#include <memory>
#include "enemy_ship_factory.h"
#include "weapon_lazer.h"
#include "engine_ufo.h"

class UfoEnemyShipFactory : public EnemyShipFactory
{
private:

public:
	UfoEnemyShipFactory() {}
	~UfoEnemyShipFactory() {}
	std::shared_ptr<Weapon> addWeapon() {
		return  std::make_shared<LazerGun>(); // Specific to regular UFO
	}

	// Defines the engine object to associate with the ship

	std::shared_ptr<Engine> addEngine() {
		return  std::make_shared<UfoEngine>(); // Specific to regular UFO
	}
};

#endif // _UFOENEMYSHIPFACTORY_
