#include "singleton.h"
#include <cassert>
#include <iostream>

int main()
{
    // Cannot compile since the constructor is private.
    // Singleton new_instance{};
    std::cout << "Singleton Instance Address: " << Singleton::get_instance()
              << std::endl;
    std::cout << "Singleton Instance Value: "
              << Singleton::get_instance()->get_value() << std::endl;
    int const value{5};
    std::cout << "Setting Singleton Instance Value To: " << value << std::endl;
    Singleton::get_instance()->set_value(value);
    std::cout << "Singleton Instance Value: "
              << Singleton::get_instance()->get_value() << std::endl;
    assert(value == Singleton::get_instance()->get_value());
}