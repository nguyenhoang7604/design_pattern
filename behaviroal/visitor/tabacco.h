#include "visitable.h"

class Tabacco : public Visitable
{
private:
    double price_;

public:
    Tabacco(double price);
    ~Tabacco();
    double getPrice();
    double accept(Visitor* visitor) override;
};