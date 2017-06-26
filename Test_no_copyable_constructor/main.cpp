#include <iostream>
#include "Cat.h"
using namespace std;

int main()
{
    Animal *WhiteCat = new Cat("White");
    Cat *BlackCat = new Cat("Black");
    Cat GrayCat("Gray");
    Animal *pCopyGrayCat = &GrayCat;
    Cat CopyGrayCat(GrayCat);

    WhiteCat->bark();
    BlackCat->bark();
    GrayCat.bark();
    pCopyGrayCat->bark();
    CopyGrayCat.bark();


    system("pause");
    return 0;
}