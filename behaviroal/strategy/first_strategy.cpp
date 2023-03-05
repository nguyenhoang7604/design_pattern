/*
    Author: TomNguyen
    Created: 5/Mar/2023
*/
#include "first_strategy.h"

FirstStrategy::FirstStrategy()
{
}

FirstStrategy::~FirstStrategy()
{
}

std::string FirstStrategy::doAlgorithm(std::string_view data)
{
    std::cout << "Do normal sorting" << std::endl;
    std::string result(data);
    std::sort(std::begin(result), std::end(result));

    return result;
}
