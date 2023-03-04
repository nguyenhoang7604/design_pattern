/*
    Author: TomNguyen
    Created: 3/Mar/2023
*/

#ifndef _SUBJECT_
#define _SUBJECT_

#include <iostream>
#include <memory>

class Observer;

class Subject
{
public:
    Subject() {}
    ~Subject() {}
    virtual std::string getName()=0;
    virtual void notify()=0;
    virtual void subscribe(std::shared_ptr<Observer> observer)=0;
    virtual void unsubscribe(std::shared_ptr<Observer> observer)=0;
};

#endif // _SUBJECT_