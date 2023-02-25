#include <iostream>
#include <vector>
#include "tabacco.h"
#include "liquor.h"
#include "necessity.h"
#include "tax_visitor.h"


int main()
{      
    double watorPrice(5.5);
    Tabacco* cigarret = new Tabacco(99.5);
    Liquor* wator = new Liquor(5.5);
    Necessity* milk = new Necessity(15.5);

    TaxVistor* taxCalc = new TaxVistor();
    std::vector <Visitable*> visitable;
    visitable.push_back(cigarret);
    visitable.push_back(wator);
    visitable.push_back(milk);

    for(auto v : visitable)
    {
        std::cout << v->accept(taxCalc) << std::endl;
    }

    return 0;
}