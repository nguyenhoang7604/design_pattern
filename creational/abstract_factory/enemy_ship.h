/*
    Author: TomNguyen
    Created: 6/Mar/2023
*/
#ifndef _ENEMYSHIP_
#define _ENEMYSHIP_

/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#include <iostream>
#include <string>
#include <memory>
#include "weapon.h"
#include "engine.h"
#include "enemy_ship_factory.h"

class EnemyShip
{
private:
    std::string name_;
    std::shared_ptr<Weapon> weapon_;
    std::shared_ptr<Engine> engine_;
    std::shared_ptr<EnemyShipFactory> shipFactory_;
    // Newly defined objects that represent weapon & engine
    // These can be changed easily by assigning new parts 
    // in UFOEnemyShipFactory or UFOBossEnemyShipFactory
public:
    EnemyShip(std::shared_ptr<EnemyShipFactory> shipFactory);
    ~EnemyShip();
    std::string getName();
    void followHero();
    void enemyShipAttacks();
    void setWeapon(std::shared_ptr<Weapon> weapon) { weapon_ = weapon; }
    void setEngine(std::shared_ptr<Engine> engine) { engine_ = engine; }
    void setName(std::string const& name) { name_ = name; };
    void enemyInfo();
    virtual void makeShip();
};

#endif // _ENEMYSHIP_
