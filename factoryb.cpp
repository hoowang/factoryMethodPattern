#include "factoryb.h"
#include "productb.h"

FactoryB::FactoryB()
{

}

FactoryB::~FactoryB()
{

}

abstractProduct *FactoryB::createProduct()
{
    return new ProductB();
}

void FactoryB::destroyProduct(abstractProduct *&p)
{
    delete p;
    p = 0;
}

