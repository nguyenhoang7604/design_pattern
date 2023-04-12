/*
    Author: TomNguyen
    Created: 12/Apr/2023
*/
#include "car_manual_builder.h"

CarManualBuilder::CarManualBuilder()
{
    this->reset();
}

CarManualBuilder::~CarManualBuilder()
{
}

void CarManualBuilder::reset()
{
    this->manual = new Manual();
}

void CarManualBuilder::setSeats()
{
    
}

void CarManualBuilder::setEngine()
{
    
}

void CarManualBuilder::setTripComputer()
{
    
}

void CarManualBuilder::setGps()
{
    
}

Manual* CarManualBuilder::getProduct()
{
    this->reset();
    return this->manual;
}