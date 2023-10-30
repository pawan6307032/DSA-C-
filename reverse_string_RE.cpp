#include <iostream>
#include <string>
using namespace std;

void  revser_str(string& str,int start,int end)
{
    if(start >= end)
        return;
    
    swap(str[start],str[end]);
    revser_str(str,++start,--end);
}



int main()
{
    string str = "Pawan";
    revser_str(str,0,str.length()-1);
    cout << str;
    return 0;
}
