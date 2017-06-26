#include<iostream>
using namespace std;

class TestSbNSpBase
{
public:
    //virtual void funcA() = 0;
};

class TestSbNSpSubA : public TestSbNSpBase
{
friend class TestSbNSpBase;

public:
    TestSbNSpSubA()
    {
        cout<<"TestSbNSpSubA()"<<endl;
    }
    void funcA();
    virtual ~TestSbNSpSubA()
    {
        cout<<"~TestSbNSpSubA()"<<endl;
    }
};

class TestSbNSpSubB : public TestSbNSpSubA
{
public:
    TestSbNSpSubB()
    {
        cout<<"TestSbNSpSubB()"<<endl;
    }
    virtual void funcA();
    ~TestSbNSpSubB()
    {
        cout<<"~TestSbNSpSubB()"<<endl;
    }
};