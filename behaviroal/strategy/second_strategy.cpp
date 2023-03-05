/*
    Author: TomNguyen
    Created: 5/Mar/2023
*/
#include "second_strategy.h"

SecondStrategy::SecondStrategy()
{

}

SecondStrategy::~SecondStrategy()
{

}

std::string SecondStrategy::doAlgorithm(std::string_view data)
{
    std::cout << "Do sorting with comparison function" << std::endl;
    std::string result(data);
    std::sort(std::begin(result), std::end(result), std::greater<>());

    return result;
}