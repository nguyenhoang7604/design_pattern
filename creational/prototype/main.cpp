#include "dog.h"
#include "sheep.h"
#include "prototype_factory.h"

int main()
{
    std::shared_ptr<PrototypeFactory> prototype_factory = std::make_shared<PrototypeFactory>();
    std::shared_ptr<Dog> spike = std::make_shared<Dog>("Spike", 20);
    std::shared_ptr<Sheep> doly = std::make_shared<Sheep>("Doly", 60);

    std::cout << "Let's create a Copy of Dog" << std::endl;
    std::shared_ptr<Animal> spike_clone = prototype_factory->getClone(spike);

    std::cout << "Let's create a copy of Sheep" << std::endl;
    std::shared_ptr<Animal> doly_clone = prototype_factory->getClone(doly);

    spike_clone->information();
    doly_clone->information();

    std::cout << spike << std::endl << spike_clone << std::endl;
    std::cout << doly << std::endl << doly_clone << std::endl;

    return 0;
}