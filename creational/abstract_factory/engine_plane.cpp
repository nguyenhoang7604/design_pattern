/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#include "engine_plane.h"

PlaneEngine::PlaneEngine()
 : Engine(2000)
{

}

PlaneEngine::~PlaneEngine()
{

}

void PlaneEngine::run()
{
    std::cout << "Follow the Hero with speed: " << this->getSpeed() << " km/h" << std::endl;
}