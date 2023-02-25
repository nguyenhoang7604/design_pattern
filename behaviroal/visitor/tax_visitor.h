#include <iostream>
#include "visitor.h"

class TaxVistor : public Visitor
{
private:

public:
    TaxVistor();
    ~TaxVistor();
    double visit(Liquor* liquor) override;
    double visit(Necessity* necessity) override;
    double visit(Tabacco* tabacco) override;
};
