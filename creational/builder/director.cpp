/*
    Author: TomNguyen
    Created: 12/Apr/2023
*/
#include "director.h"

Director::Director()
{
}

Director::~Director()
{
}

void Director::setBuilder(std::shared_ptr<Builder> builder)
{
    this->builder_ = builder;
}

void Director::constructSportsCar()
{
    builder_->setSeats();
    builder_->setEngine();
    builder_->setTripComputer();
    builder_->setGps();
}

void Director::constructSuv()
{
    builder_->setSeats();
    builder_->setEngine();
    builder_->setTripComputer();
}