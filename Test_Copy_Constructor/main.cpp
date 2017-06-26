#include "A.h"
using namespace std;

int main()
{
    A a("a");
    A b(a);
    cout<<&b.m_pszSth<<endl;
    cout<<&a.m_pszSth<<endl;
    cout<<&b<<endl;
    cout<<&a<<endl;
    //cout<<"After constructor"<<endl;
    //a.print();
    //b.print();
    //
    //a.set("c");
    //cout<<"After set a"<<endl;
    //a.print();
    //b.print();

    //b.set("b");
    //cout<<"After set b"<<endl;
    //a.print();
    //b.print();

    system("pause");
    return 0;
}