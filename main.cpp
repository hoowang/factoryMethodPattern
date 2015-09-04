#include <iostream>
#include "factorya.h"
#include "factoryb.h"
#include "producta.h"
#include "productb.h"

using namespace std;

int main()
{

    abstractFactory *factoryA = new FactoryA ();
    abstractProduct *productA = factoryA->createProduct();
    productA->show();

    abstractFactory *factoryB = new FactoryB ();
    abstractProduct *productB = factoryB->createProduct();
    productB->show();

    cout<<"===destroy all objects===="<<endl;
    factoryA->destroyProduct (productA);
    delete factoryA;
    factoryA = 0;
    factoryB->destroyProduct (productB);
    delete factoryB;
    factoryB = 0;
    return 0;
}

