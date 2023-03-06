/*
    Author: TomNguyen
    Created: 6/Mar/2023
*/
#include <iostream>
#include "enemy_ship_factory.h"

int main()
{
    std::shared_ptr<EnemyShipFactory> shipFactory(new EnemyShipFactory());
    std::shared_ptr<EnemyShip> theEnemy;

    /*
        Can get the user input here to determine the type of enemy ship.
        So we can dynamic create new Enemy Ship.
    */
    theEnemy = shipFactory->makeEnemyShip(enemyShipType::LAZER);

    theEnemy->displayEnemyShip();
    theEnemy->followHeroShip();
    theEnemy->enemyShipShoots();

    std::cout << "=========================================" << std::endl;
    theEnemy = shipFactory->makeEnemyShip(enemyShipType::UFO);
    theEnemy->displayEnemyShip();
    theEnemy->followHeroShip();
    theEnemy->enemyShipShoots();

    return 0;
}