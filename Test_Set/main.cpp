#include <set>
#include <iostream>
#include <algorithm>

int main(){

    char c1[9] = {'a', 's', 'g', 'd', 'f', 'h', 'l', 'k', 'j'};
    std::set<char> s1(c1, c1+9);
    std::set<char>::iterator it = s1.begin();
    for(int i = 0; i < 9; i++){
        if(std::find(c1, c1+9, c1[i]) != c1+9)
            std::cout<<"true : "<< c1[i] <<std::endl;
        else
            std::cout<<"false : "<< c1[i] <<std::endl;

        //it++;
    }
    /*if( s1.end() != s1.find(strTemp[i]) ){
                    nCurType = 1;
                }        
*/
    system("pause");
    return 0;
}