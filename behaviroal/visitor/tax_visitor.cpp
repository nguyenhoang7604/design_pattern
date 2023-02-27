/*
    Author: TomNguyen
    Created: 27/Feb/2023
*/
#include <iostream>
#include "tax_visitor.h"

TaxVistor::TaxVistor()
{
}

TaxVistor::~TaxVistor()
{
}

double TaxVistor::visit(Liquor* liquor)
{
    std::cout << "Visit Liquor class" << std::endl;
    return liquor->getPrice()*1.15;
}

double TaxVistor::visit(Necessity* necessity)
{
    std::cout << "Visit Necessity class" << std::endl;
    return necessity->getPrice()*1.05;
}

double TaxVistor::visit(Tabacco* tabacco)
{
    std::cout << "Visit Tabacco class" << std::endl;
    return tabacco->getPrice()*1.35;
}