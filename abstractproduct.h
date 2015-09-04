#ifndef ABSTRACTPRODUCT_H
#define ABSTRACTPRODUCT_H


class abstractProduct
{
public:
    abstractProduct();
    ~abstractProduct();

public:
    virtual void show() = 0;
};

#endif // ABSTRACTPRODUCT_H
