/*
    Author: TomNguyen
    Created: 12/Apr/2023
*/
#ifndef _DIRECTOR_
#define _DIRECTOR_

#include "builder.h"
#include <memory>
class Director
{
private:
    std::shared_ptr<Builder> builder_;

public:
    Director();
    ~Director();
    void setBuilder(std::shared_ptr<Builder>);
    void constructSportsCar();
    void constructSuv();
};

#endif //_DIRECTOR_