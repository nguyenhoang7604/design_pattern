/*
    Author: TomNguyen
    Created: 5/Mar/2023
*/
#include "context.h"

Context::Context(std::unique_ptr<Strategy> &&strategy)
    : strategy_(std::move(strategy))
{
}

Context::~Context()
{
}

/**
 * Usually, the Context allows replacing a Strategy object at runtime.
 */
void Context::setStrategy(std::unique_ptr<Strategy> &&strategy)
{
    strategy_ = std::move(strategy);
}
/**
 * The Context delegates some work to the Strategy object instead of
 * implementing multiple versions of the algorithm on its own.
 */
void Context::doSomeBusinessLogic() const
{
    if (strategy_) {
        std::cout << "Context: Sorting data using the strategy (not sure how it'll do it)" << std::endl;
        std::string result = strategy_->doAlgorithm("aecbd");
        std::cout << result << std::endl;
    } else {
        std::cout << "Context: Strategy isn't set" << std::endl;
    }
}
