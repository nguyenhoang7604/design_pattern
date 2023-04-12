/*
    Author: TomNguyen
    Created: 12/Apr/2023
*/
#include <iostream>
#include <memory>
#include "director.h"
#include "car_builder.h"
#include "car_manual_builder.h"


int main()
{
    std::unique_ptr<Director> director = std::make_unique<Director>();

    std::shared_ptr<CarBuilder> carBuilder = std::make_shared<CarBuilder>();
    director->setBuilder(carBuilder);
    director->constructSportsCar();
    std::shared_ptr<Car> car = carBuilder->getProduct();
    car->information();
    // CarManualBuilder* builder1 = new CarManualBuilder();
    // director->constructSportsCar();

    // The final product is often retrieved from a builder
    // object since the director isn't aware of and not
    // dependent on concrete builders and products.
    // Manual* manual = builder1->getProduct();

    // delete builder1;
    // delete carBuilder;
    return 0;
}