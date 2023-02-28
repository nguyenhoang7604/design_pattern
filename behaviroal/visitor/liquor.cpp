/*
    Author: TomNguyen
    Created: 27/Feb/2023
*/
#include "liquor.h"
#include <memory>

Liquor::Liquor(double price)
{
    price_ = price;
}

Liquor::~Liquor()
{
}

double Liquor::getPrice()
{
    return price_;
}

double Liquor::accept(std::shared_ptr<Visitor> visitor)
{
    return visitor->visit(this);
}

// int main()
// {
//     return 0;
// }