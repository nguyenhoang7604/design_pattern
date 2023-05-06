#ifndef _SHEEP_
#define _SHEEP_
#include "animal.h"

class Sheep : public Animal
{
private:
public:
    Sheep(std::string, int);
    ~Sheep();
    virtual std::shared_ptr<Animal> clone() override;
};



#endif // _SHEEP_