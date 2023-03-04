/*
    Author: TomNguyen
    Created: 3/Mar/2023
*/

#include "stock_observer.h"

StockObserver::StockObserver(std::string name)
    : name_(name)
{

}

StockObserver::~StockObserver()
{

}

void StockObserver::update()
{
    // std::cout << name_ <<": Got update about " << subject->getName() << std::endl;
    std::cout << name_ <<": Got update" << std::endl;
}

std::string StockObserver::getName()
{
    return name_;
}