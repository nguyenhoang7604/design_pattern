/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#ifndef _ENEMYSHIPFACTORY_
#define _ENEMYSHIPFACTORY_

#include <memory>
#include "engine.h"
#include "weapon.h"

class EnemyShipFactory
{
private:

public:
    EnemyShipFactory() {}
    ~EnemyShipFactory() {}
	
	virtual std::shared_ptr<Weapon> addWeapon()=0;
	virtual std::shared_ptr<Engine> addEngine()=0;
};


#endif // _ENEMYSHIPFACTORY_
