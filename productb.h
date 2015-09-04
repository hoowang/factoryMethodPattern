#ifndef PRODUCTB_H
#define PRODUCTB_H

#include "abstractproduct.h"

class ProductB : public abstractProduct
{
public:
    ProductB();
    ~ProductB();

public:
    virtual void show();
};

#endif // PRODUCTB_H
