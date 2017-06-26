#include <iostream>
#include <assert.h>
#include "..\\Test_no_copyable_constructor\\Non_Copy_Class.h"
using namespace std;

class Widget {
public:
    Widget()
    {
        m_nResult = 0;
    }
    void init(const int &nResult)
    {
        m_nResult = nResult;
    }
    ~Widget(){};
    Widget& operator=(const int& nResult)
    {
        m_nResult = nResult;
        return *this;
    }
    Widget& operator+(const int& nResult)
    {
        m_nResult+=nResult;
        return *this;
    }

    Widget& operator=(const Widget& widget)
    {
        return static_cast<Widget>(widget);
    }

    int m_nResult;
};

int main(){
    Widget *pWidget = new Widget();
    pWidget->init(5);
    assert(pWidget->m_nResult == 5);
    *pWidget = 11;
    assert(pWidget->m_nResult == 11);
    delete pWidget;
    system("pause");
    return 0;
}