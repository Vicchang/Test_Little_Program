#include <windows.h>
#include <iostream>
using namespace std;

#define FILE_PATH "C:\\Users\\victor_chang\\Desktop\\Invalid_data\\test.txt"

int main()
{
    FILE *pFile, *pFile1;
    FILE *pFile2 = _fsopen(FILE_PATH, "r", _SH_DENYNO); 
    if(NULL == pFile2)
        cout << " GetLastError = " << GetLastError() << endl;
    FILE *pFile3 = _fsopen(FILE_PATH, "a", _SH_DENYWR); 
    if(NULL == pFile3)
        cout << " GetLastError = " << GetLastError() << endl;

    int nRet = fopen_s(&pFile, FILE_PATH, "a+b");   
    cout << "nRet = " << nRet << " GetLastError = " << GetLastError() << endl;
    nRet = fopen_s(&pFile1, FILE_PATH, "a+b"); 
    cout << "nRet = " << nRet << " GetLastError = " << GetLastError() << endl;
    //fclose(pFile);
    //nRet = fopen_s(&pFile1, FILE_PATH, "a+b"); 
    //cout << "nRet = " << nRet << " GetLastError = " << GetLastError()<< endl;

    system("pause");
    return 0;
}