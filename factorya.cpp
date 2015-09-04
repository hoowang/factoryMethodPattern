#include "factorya.h"
#include <producta.h>

FactoryA::FactoryA()
{

}

FactoryA::~FactoryA()
{

}

abstractProduct *FactoryA::createProduct()
{
    return new ProductA();
}

void FactoryA::destroyProduct(abstractProduct *&p)
{
    delete p;
    p = 0;
}

