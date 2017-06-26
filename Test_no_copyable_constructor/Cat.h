#include "Animal.h"
#include <string.h>

class Cat: public Animal
{
public:
    Cat(std::string strColor);
    ~Cat(){};
    void bark();
private:
    std::string m_strColor;
};