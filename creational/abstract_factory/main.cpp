/*
    Author: TomNguyen
    Created: 6/Mar/2023
*/
#include <iostream>
#include "enemy_ship.h"
#include "enemy_ship_building.h"
#include "enemy_ship_factory.h"

int main()
{
    // EnemyShipBuilding handles orders for new EnemyShips
    // You send it a code using the orderTheShip method &
    // it sends the order to the right factory for creation

    std::unique_ptr<EnemyShipBuilding> makeEnemy = std::make_unique<EnemyShipBuilding>();
    std::cout << "=======================" << std::endl;
    std::shared_ptr<EnemyShip> theGrunt = makeEnemy->orderTheShip(enemyShipType::UFO);
    theGrunt->enemyInfo();
    std::cout << "=======================" << std::endl;
    std::shared_ptr<EnemyShip> thePlane = makeEnemy->orderTheShip(enemyShipType::PLANE);
    thePlane->enemyInfo();
    std::cout << "=======================" << std::endl;
    std::shared_ptr<EnemyShip> theTank = makeEnemy->orderTheShip(enemyShipType::TANK);
    theTank->enemyInfo();
    std::cout << "=======================" << std::endl;

    return 0;
}