#include "sheep.h"

Sheep::Sheep(std::string name, int weight)
 : Animal(name, weight)
{
    std::cout << "Sheep name [" <<  name << "] is made" << std::endl;
}

Sheep::~Sheep()
{

}

std::shared_ptr<Animal> Sheep::clone()
{
    // Need to create deep copy function instead of shallow copy here if class has at least one pointer value.
    return std::make_shared<Sheep>(*this);
}
