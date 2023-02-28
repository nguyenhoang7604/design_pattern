/*
    Author: TomNguyen
    Created: 27/Feb/2023
*/
#include <iostream>
#include "visitor.h"
#include "liquor.h"
#include "necessity.h"
#include "tobacco.h"

class TaxVistor : public Visitor
{
private:

public:
    TaxVistor();
    ~TaxVistor();
    double visit(Liquor* liquor) override;
    // double visit(Necessity* necessity) override;
    double visit(Tobacco* tobacco) override;
    double visit(Necessity* necessity) override;
};
