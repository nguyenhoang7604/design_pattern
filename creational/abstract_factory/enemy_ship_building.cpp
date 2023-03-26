/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#include "enemy_ship_building.h"

EnemyShipBuilding::EnemyShipBuilding()
{

}

EnemyShipBuilding::~EnemyShipBuilding()
{

}

std::shared_ptr<EnemyShip> EnemyShipBuilding::orderTheShip(int typeOfEnemy)
{
    std::shared_ptr<EnemyShip> theEnemyShip = makeEnemyShip(typeOfEnemy);
    
    theEnemyShip->makeShip();
    theEnemyShip->followHero();
    theEnemyShip->enemyShipAttacks();
    
    return theEnemyShip;
}

std::shared_ptr<EnemyShip> EnemyShipBuilding::makeEnemyShip(int typeOfEnemy)
{
    std::shared_ptr<EnemyShip> theEnemyShip;
    std::shared_ptr<EnemyShipFactory> shipPartsFactory;
    
    // If UFO was sent grab use the factory that knows
    // what types of weapons and engines a regular UFO
    // needs. The EnemyShip object is returned & given a name
    
    if (typeOfEnemy == enemyShipType::UFO) {
        shipPartsFactory = std::make_shared<UfoEnemyShipFactory>();
        theEnemyShip = std::make_shared<EnemyShip>(shipPartsFactory);
        theEnemyShip->setName("UFO Lazer Enemy");
        
    } else if (typeOfEnemy == enemyShipType::TANK) {
        shipPartsFactory = std::make_shared<TankEnemyFactory>();
        theEnemyShip = std::make_shared<EnemyShip>(shipPartsFactory);
        theEnemyShip->setName("Tank Rocket Enemy");
    } else if (typeOfEnemy == enemyShipType::PLANE) {
        shipPartsFactory = std::make_shared<PlaneEnemyShipFactory>();
        theEnemyShip = std::make_shared<EnemyShip>(shipPartsFactory);
        theEnemyShip->setName("Plane Rocket Enemy");        
    }
    
    return theEnemyShip;
}