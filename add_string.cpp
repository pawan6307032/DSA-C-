#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void addition(string a,string b)
{
    string add = "";
    int carry = 0;
    
    int i = a.size() - 1;
    int j = b.size() - 1;

    while(i>= 0 && j >= 0)
    {
        int x = int (a[i]) + int (b[j]) + carry;
        int digit = x%10;
        add.push_back(digit + '0');
        carry = x / 10;
        i--;
        j--;
    }

    while(i>= 0)
    {
        int x = int (a[i]) + 0 + carry;
        int digit = x%10;
        add.push_back(digit);
        carry = x / 10;
        i--;
    }
    

    while(j >= 0)
    {
        int x = 0 + int (b[j]) + carry;
        int digit = x%10;
        add.push_back(digit);
        carry = x / 10;
        j--;
    }

    if(carry)
    {
        add.push_back(carry);
    }

    reverse(add.begin(),add.end());

    for(auto value : add)
        cout<<value <<" ";
}

int main()
{
    string a = "11";
    string b = "123";

    addition(a,b);
    return 0;
}