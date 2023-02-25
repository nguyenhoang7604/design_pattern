#include "visitable.h"

class Necessity : public Visitable
{
private:
    double price_;
public:
    Necessity(double price);
    ~Necessity();
    double getPrice();
    double accept(Visitor *visitor) override;
};

