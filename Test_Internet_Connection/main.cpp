#include <windows.h>
#include <Wininet.h>
#include <iostream>

int main()
{
    DWORD dwFlag = 0;
    BOOL bHasInternet = InternetGetConnectedState(&dwFlag, 0);

    std::cout << "bHasInternet = " << bHasInternet << ", dwFlag = " << std::hex << dwFlag << std::endl;

    system("pause");
    return 0;
}