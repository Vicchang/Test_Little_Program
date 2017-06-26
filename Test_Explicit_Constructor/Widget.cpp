#include "Widget.h"
#include <iostream>

Widget::Widget(){
    m_strName = "TEST";
}

Widget::Widget(std::string strName){
    m_strName = strName;
}

void Widget::print(){
    std::cout << m_strName << std::endl;
}

Widget::Widget(int nRes) :
    m_strName("ABC")
{}