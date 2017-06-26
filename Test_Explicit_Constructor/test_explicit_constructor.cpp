#include "Widget.h"

class foo
{
public:
    explicit foo(Widget widget){}
    foo(){}
    foo& operator=(const Widget& w);
};

void callfoo(foo f){}

void callfoo(std::string str){}

int main(){
    //Widget W1("abc");
    //W1.print();
    //std::string a = "str";
    //foo ff(std::string("str"));
    //Widget W2;
    //W2.print();
    //Widget W3(2);
    //foo(Widget(1));
    //foo(1);
    //foo(Widget());
   // Widget W1(1);
    Widget W1 = "ABC";
    callfoo(W1);
    system("pause");
    return 0;
}