/*
    Author: TomNguyen
    Created: 5/Mar/2023
*/
#include <iostream>
#include "first_strategy.h"
#include "second_strategy.h"
#include "context.h"

/**
 * The main code picks a concrete strategy and passes it to the context. The
 * client should be aware of the differences between strategies in order to make
 * the right choice.
 */

int main()
{
    Context context(std::make_unique<FirstStrategy>());
    std::cout << "Client: Strategy is set to normal sorting." << std::endl;
    context.doSomeBusinessLogic();

    std::cout <<"==================================" << std::endl;

    std::cout << "Client: Strategy is set to reverse sorting." << std::endl;
    context.setStrategy(std::make_unique<SecondStrategy>());
    context.doSomeBusinessLogic();
    return 0;
}