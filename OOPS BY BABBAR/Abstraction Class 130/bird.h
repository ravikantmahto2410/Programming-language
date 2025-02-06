#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
class Bird
{

public:
    virtual void eat() = 0;
    virtual void fly() = 0;

    //classes that inherits this class
    // has to implement pure virtual fns
};
class sparrow : public Bird{
private:
    void eat()
    {
        std::cout<<"Sparrow is eating \n";
    }
    void fly()
    {
        std::cout<<"Sparrow is Flying\n";
    }
};
class eagle : public Bird{
private:
    void eat()
    {
        std::cout<<"Eagle is eating \n";
    }
    void fly()
    {
        std::cout<<"Eagle is Flying\n";
    }
};
class Pigeon : public Bird{
private:
    void eat()
    {
        std::cout<<"Pigeon is eating \n";
    }
    void fly()
    {
        std::cout<<"Pigeon is Flying\n";
    }
};
#endif // BIRD_H

