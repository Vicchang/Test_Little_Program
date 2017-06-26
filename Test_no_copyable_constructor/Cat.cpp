#include <iostream>
#include "Cat.h"

Cat::Cat(std::string strColor):
m_strColor("invisible")
{
    m_strColor = strColor;
}

void Cat::bark()
{
    std::cout<<"I am a " << m_strColor.c_str() << " cat!!!"<<std::endl;
}