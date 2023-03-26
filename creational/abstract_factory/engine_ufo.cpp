/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#include "engine_ufo.h"

UfoEngine::UfoEngine()
 : Engine(5000)
{

}

UfoEngine::~UfoEngine()
{

}

void UfoEngine::run()
{
    std::cout << "Follow the Hero with speed: " << this->getSpeed() << " km/h" << std::endl;
}