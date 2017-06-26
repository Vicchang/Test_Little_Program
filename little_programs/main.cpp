#include<iostream>
#include "Test_Sub_N_Super_Class.h"
using namespace std;

void TestSbNSpSubA::funcA()
{
    cout<<"TestSbNSpSubA"<<endl;
}

void TestSbNSpSubB::funcA()
{
    cout<<"TestSbNSpSubB"<<endl;
}

void print(TestSbNSpSubA *pSubA)
{
    pSubA->funcA();
}
int main()
{
    TestSbNSpSubB* SubB = new TestSbNSpSubB();

    print(SubB);
    delete SubB;
    system("pause");
    return 0;
}