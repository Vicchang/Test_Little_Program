#include "Non_Copy_Class.h"

class Animal: public NonCopy <Animal>
{
    friend class NonCopy< Animal >;
public:
    Animal(){};
    virtual ~Animal(){};
    virtual void bark(){};
};