#include "prototype_factory.h"

PrototypeFactory::PrototypeFactory()
{
    // prototypes_[Type::Dog] = std::make_shared<Dog>("Spike ", 20);
    // prototypes_[Type::Sheep] = std::make_shared<Sheep>("Dolly ", 60);
}

PrototypeFactory::~PrototypeFactory()
{
}

std::shared_ptr<Animal> PrototypeFactory::getClone(std::shared_ptr<Animal> animal)
{
    return animal->clone();
}