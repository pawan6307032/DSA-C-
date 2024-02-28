#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int binary_2_decimal(int num)
{
    int ans = 0;
    int i = 0;
    while(num != 0)
    {
        int x = num%10;
        ans = ans + pow(2,i++) * x;
        num = num/10;
    }
    return ans;
}

int string_2_integet(string s)
{
    int ans = 0;
    int j = 0;
    for(int i = s.size() - 1;i >= 0;i--)
    {
        int x = int(s[i] - '0');
        ans = pow(10,j++) * x + ans;
    }
    return ans;
}

bool check(int num)
{
    if(num % 10 == 0)
        return true;
    else   
        return false;
}



int main()
{
    string s = "01100000001110000001100110001111001001101001001001000011111001111010100000110011011000111110001100";
    unsigned int nums = string_2_integet(s);
    cout << nums;
    
    // nums = binary_2_decimal(nums);

    // cout << nums << endl;
    // if(check(nums))
    //     cout << "true" ;
    // else   
    //     cout << "false";
    
}