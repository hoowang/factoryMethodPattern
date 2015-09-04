#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

class abstractProduct;

class abstractFactory
{
public:
    abstractFactory();
    virtual ~abstractFactory();

public:
    virtual abstractProduct* createProduct() = 0;
    virtual void destroyProduct(abstractProduct*& product) = 0;
};

#endif // ABSTRACTFACTORY_H
