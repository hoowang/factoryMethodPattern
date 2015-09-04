#ifndef PRODUCTA_H
#define PRODUCTA_H
#include <abstractproduct.h>

class ProductA : public abstractProduct
{
public:
    ProductA();
    ~ProductA();

public:
    virtual void show();
};

#endif // PRODUCTA_H
