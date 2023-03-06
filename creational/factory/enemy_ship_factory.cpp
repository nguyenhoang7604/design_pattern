/*
    Author: TomNguyen
    Created: 6/Mar/2023
*/
#include <memory>
#include "enemy_ship_factory.h"

EnemyShipFactory::EnemyShipFactory()
{
}

EnemyShipFactory::~EnemyShipFactory()
{
}

std::shared_ptr<EnemyShip> EnemyShipFactory::makeEnemyShip(int type)
{
    std::shared_ptr<EnemyShip> newEnemyShip;
    switch (type)
    {
    case enemyShipType::UFO:
        newEnemyShip = std::make_shared<UfoEnemyShip>();
        break;
    case enemyShipType::ROCKET:
        newEnemyShip = std::make_shared<RocketEnemyShip>();
        break;
    case enemyShipType::LAZER:
       newEnemyShip = std::make_shared<LazerEnemyShip>();
        break;
    default:
        std::cout << "Type not found" << std::endl;
        break;
    }

    return newEnemyShip;
}