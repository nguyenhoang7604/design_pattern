
#include "liquor.h"

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

double Liquor::accept(Visitor* visitor)
{
    return visitor->visit(this);
}