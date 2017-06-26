#include <iostream>
#include <windows.h>
#include <Tchar.h.>
#include <string.h>

#define FILE_PATH L"C:\\ab.d"
using namespace std;

int main()
{
    FILE *pFile;
    while(true)
    {
        wchar_t *szStr = new wchar_t[20];
        int nTime = 0;
        cout <<"name?"<<endl;
        wcin >> szStr;
        cout <<"wait?"<<endl;
        cin >> nTime;
        for(int i = 0; i < 100; i++)
        {
            wstring wstrTemp = L"C:\\";
            wstring wstrPath = wstrTemp.append(wstring(szStr));
            wstrPath+=L".lcd";
            errno_t err = _wfopen_s( &pFile, wstrPath.c_str(), L"a+b"); 
            if(err)
                cout << "err = " << err << endl;
            if(pFile)
                fclose(pFile);
            Sleep(nTime);
        }

        system("pause");
    }
    return 0;
}
