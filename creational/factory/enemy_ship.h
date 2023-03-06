/*
    Author: TomNguyen
    Created: 6/Mar/2023
*/
#ifndef _ENEMYSHIP_
#define _ENEMYSHIP_

#include <iostream>
#include <string>

class EnemyShip
{
private:
    std::string name_;
    double atmDamage_;
public:
    EnemyShip();
    ~EnemyShip();
    std::string getName();
    void setName(std::string);
    void followHeroShip();
    void displayEnemyShip();
    void setDamage(double);
    void enemyShipShoots();
    double getDamage();
};

#endif // _ENEMYSHIP_
