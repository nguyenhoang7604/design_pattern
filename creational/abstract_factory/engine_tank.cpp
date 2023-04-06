/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#include "engine_tank.h"

TankEngine::TankEngine()
 : Engine(500)
{

}

TankEngine::~TankEngine()
{

}

void TankEngine::run()
{
    std::cout << "Follow the Hero with speed: " << this->getSpeed() << " km/h" << std::endl;
}