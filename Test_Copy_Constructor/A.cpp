#include "A.h"

A::A(char* pszSth)
{
    m_pszSth = pszSth;
}

void A::print()
{
    std::cout<<"m_pszSth = "<< m_pszSth <<std::endl;
}

void A::set(char* pszSth)
{
    m_pszSth = pszSth;
}