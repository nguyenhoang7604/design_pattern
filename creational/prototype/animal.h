#ifndef _ANIMAL_
#define _ANIMAL_
#include <memory>
#include <string>
#include <iostream>

class Animal
{
private:
    std::string name_;
    int weight_;
public:
    Animal(std::string name, int weight) {
        name_ = name;
        weight_ = weight;
    };
    ~Animal() {};
    virtual std::shared_ptr<Animal> clone()=0;
    void information() {
        std::cout << "Hi, my name is [" << name_ << "]. I'm " << weight_ << " kg." << std::endl;
    }
};

#endif //_ANIMAL_