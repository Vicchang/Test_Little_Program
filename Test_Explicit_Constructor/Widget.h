#include<string>

class Widget
{
public:
    //explicit Widget();
    Widget();
    Widget(const std::string strName);
    //explicit Widget(int nRes);
    Widget(int nRes);
    void print();
    operator std::string() const {return "DOG";}
private:
    std::string m_strName;
};