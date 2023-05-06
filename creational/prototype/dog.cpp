#include "dog.h"

Dog::Dog(std::string name, int weight)
 : Animal(name, weight)
{
    std::cout << "Dog name [" <<  name << "] is made" << std::endl;
}

Dog::~Dog()
{

}

std::shared_ptr<Animal> Dog::clone()
{
    // Need to create deep copy function instead of shallow copy here if class has at least one pointer value.
    return std::make_shared<Dog>(*this);
}