/*
    Author: TomNguyen
    Created: 12/Apr/2023
*/
#include "car.h"
#include <iostream>

void Car::setSeat(int number)
{
    this->seats_ = number;
}

void Car::setEngineSpeed(int speed)
{
    this->engineSpeed_ = speed;
}

void Car::installGps(bool hasGps)
{
    this->hasGps_ = hasGps;
    if (hasGps)
        std::cout << "Installing GPS for the Car" << std::endl;
}

void Car::installTripComputer(bool tripComputer)
{
    this->hasTripComputer_ = tripComputer;
    if (tripComputer)
        std::cout << "Setting trip computer for the Car" << std::endl;
}

void Car::information()
{
    std::cout << "Car has:  " << this->seats_ << " seats" << std::endl;
    std::cout << "Car has Engine with max speed: " << this->engineSpeed_ << " km/h" << std::endl;

    if (hasTripComputer_)
        std::cout << "Car support Trip Computer" << std::endl;
    if (hasGps_)
        std::cout << "Car support GPS" << std::endl;
}