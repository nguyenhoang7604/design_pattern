/*
    Author: TomNguyen
    Created: 6/Mar/2023
*/

#include "enemy_ship.h"


EnemyShip::EnemyShip()
{
}

EnemyShip::~EnemyShip()
{
}

void EnemyShip::setName(std::string name)
{
    this->name_ = name;
}

std::string EnemyShip::getName()
{
    return this->name_;
}

void EnemyShip::setDamage(double damage)
{
    this->atmDamage_ = damage;
}

double EnemyShip::getDamage()
{
    return this->atmDamage_;
}

void EnemyShip::followHeroShip()
{
    std::cout << this->getName() << " is following the hero" << std::endl;
}

void EnemyShip::displayEnemyShip()
{
    std::cout << this->getName() << " is on the screen" << std::endl;
}

void EnemyShip::enemyShipShoots()
{
    std::cout << this->getName() << " attacks and does " << this->getDamage() << " damages" << std::endl;
}
