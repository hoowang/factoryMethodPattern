#ifndef FACTORYA_H
#define FACTORYA_H
#include <abstractfactory.h>

class FactoryA : public abstractFactory
{
public:
    FactoryA();
    ~FactoryA();

public:
    virtual abstractProduct* createProduct ();
    virtual void destroyProduct (abstractProduct*& p);

};

#endif // FACTORYA_H
