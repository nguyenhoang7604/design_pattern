/*
    Author: TomNguyen
    Created: 27/Feb/2023
*/
#include "necessity.h"

Necessity::Necessity(double price)
 : price_(price)
{
}

Necessity::~Necessity()
{
}

double Necessity::getPrice()
{
    return price_;
}

double Necessity::accept(std::shared_ptr<Visitor> visitor)
{
    return visitor->visit(this);
}