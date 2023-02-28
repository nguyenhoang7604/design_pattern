/*
    Author: TomNguyen
    Created: 27/Feb/2023
*/
#include <iostream>
#include <vector>
#include <memory>
#include "tobacco.h"
#include "liquor.h"
#include "necessity.h"
#include "tax_visitor.h"


int main()
{      
    std::unique_ptr<Tobacco> cigarret(new Tobacco(99.5));
    std::shared_ptr<Liquor> gin(new Liquor(55.5));
    std::shared_ptr<Necessity> milk(new Necessity(25.5));
    std::shared_ptr<TaxVistor> taxCalc(new TaxVistor());
    
    std::vector <std::shared_ptr<Visitable>> visitables;
    visitables.push_back(std::move(cigarret));
    visitables.push_back(gin);
    visitables.push_back(milk);

    for(auto v : visitables)
    {
        std::cout << v->accept(taxCalc) << std::endl;
    }

    return 0;
}