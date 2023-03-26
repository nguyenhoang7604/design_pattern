/*
    Author: TomNguyen
    Created: 6/Mar/2023
*/

#include "enemy_ship.h"


EnemyShip::EnemyShip(std::shared_ptr<EnemyShipFactory> shipFactory)
{
    shipFactory_ = shipFactory;
}

EnemyShip::~EnemyShip()
{
}
std::string EnemyShip::getName()
{
    return this->name_;
}

void EnemyShip::followHero()
{
    engine_->run();
}

void EnemyShip::enemyInfo()
{
    std::cout << "The " + this->name_  << " has a top speed of " << engine_->getSpeed() << " km/h" << 
				" and an attack power of " << weapon_->getAtkDamage() << " atk" << std::endl;
}

void EnemyShip::enemyShipAttacks()
{
    std::cout << this->getName() << " attacks and does " << weapon_->getAtkDamage() << " damages" << std::endl;
}

void EnemyShip::makeShip()
{
    std::cout << "Making enemy ship " <<  getName() << std::endl;
        
        // The specific weapon & engine needed were passed in
        // shipFactory. We are assigning those specific part
        // objects to the UFOEnemyShip here
        
    this->setWeapon(shipFactory_->addWeapon());
    this->setEngine(shipFactory_->addEngine());
}
