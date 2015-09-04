#ifndef FACTORYB_H
#define FACTORYB_H
#include <abstractfactory.h>

class FactoryB : public abstractFactory
{
public:
    FactoryB();
    ~FactoryB();

public:
    virtual abstractProduct* createProduct ();
    virtual void destroyProduct (abstractProduct*& p);

};

#endif // FACTORYB_H
