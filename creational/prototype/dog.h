#ifndef _DOG_
#define _DOG_
#include "animal.h"

class Dog : public Animal
{
private:
    int weight_;
public:
    Dog(std::string, int);
    ~Dog();
    virtual std::shared_ptr<Animal> clone() override;
};



#endif // _DOG_