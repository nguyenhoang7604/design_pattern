#ifndef PROTOTYPE_FACTORY
#define PROTOTYPE_FACTORY

#include <unordered_map>
#include "animal.h"
#include "dog.h"
#include "sheep.h"

// enum Type {
//     Dog = 0,
//     Sheep
// };

class PrototypeFactory
{
private:
    // std::unordered_map<Type, std::shared_ptr<Animal>, std::hash<int>> prototypes_;
public:
    PrototypeFactory();
    ~PrototypeFactory();
    std::shared_ptr<Animal> getClone(std::shared_ptr<Animal> animal);
};


#endif // PROTOTYPE_FACTORY