/*
    Author: TomNguyen
    Created: 5/Mar/2023
*/
#ifndef _CONTEXT_
#define _CONTEXT_

#include <memory>
#include "strategy.h"

class Context
{
private:
    std::unique_ptr<Strategy> strategy_;
public:
    Context(std::unique_ptr<Strategy> &&strategy);
    ~Context();
    void doSomeBusinessLogic() const;
    void setStrategy(std::unique_ptr<Strategy> &&strategy);
};

#endif //_CONTEXT_