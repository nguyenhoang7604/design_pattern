/*
    Author: TomNguyen
    Created: 27/Feb/2023
*/
#include "tobacco.h"

Tobacco::Tobacco(double price)
{
    price_ = price;
}

Tobacco::~Tobacco()
{
}

double Tobacco::getPrice()
{
    return price_;
}

double Tobacco::accept(std::shared_ptr<Visitor> visitor)
{
    return visitor->visit(this);
}
