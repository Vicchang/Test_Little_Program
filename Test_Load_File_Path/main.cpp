#include <iostream>
#include <windows.h>
#include <Tchar.h.>
#include <string.h>

#ifdef UNICODE
#define tstring std::wstring
#else
#define tstring std::string
#endif

using namespace std;

int main()
{
    tstring strName = _T("Victor");
    WritePrivateProfileString( _T("Student"), _T("Name"), strName.c_str(), _T("C:\\Program Files (x86)\\Test\\Test.ini"));
    cout << "Write C:\\Program Files (x86)\\Test\\Test.ini, GetLastError() = " << GetLastError() <<endl;

    TCHAR *tszName = new TCHAR[2048];
    GetPrivateProfileString( _T("Student"), _T("Name"), _T("DefaultName"), tszName, 2048, _T("C:\\Program Files (x86)\\Test\Test.ini"));
    cout << "Load C:\\Program Files (x86)\\Test\\Test.ini, GetLastError() = " << GetLastError() <<endl;

    system("pause");
    return 0;
}