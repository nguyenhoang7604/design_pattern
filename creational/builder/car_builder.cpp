/*
    Author: TomNguyen
    Created: 12/Apr/2023
*/
#include "car_builder.h"

CarBuilder::CarBuilder()
{
    this->reset();
}

CarBuilder::~CarBuilder()
{
}

void CarBuilder::reset()
{
    car_ = std::make_shared<Car>();
}

void CarBuilder::setSeats()
{
    car_->setSeat(2);
}

void CarBuilder::setEngine()
{
    car_->setEngineSpeed(350);
}

void CarBuilder::setTripComputer()
{
    car_->installTripComputer(true);
}

void CarBuilder::setGps()
{
    car_->installGps(true);
}

std::shared_ptr<Car> CarBuilder::getProduct()
{
    return this->car_;
}