#include <iostream>
#include <math.h>
#include <string>
using namespace std;

string take_last_string(string s)
{
    string s1;
    int n = s.size();
    int n1 = n - 3;
    for (int i = n1; i < n; i++)
    {
        s1 = s1 + s[i];
    }
    return s1;
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

int divisible_8(int s)
{
    if(s % 8 == 0)
        return 1;
    else   
        return -1;
}

void method01(string s)
{
    int nums;
    string s1;

    if(s.size() > 3)
    {
        s1 = take_last_string(s);
        nums = string_2_integet(s1);
    }
    else{
        nums = string_2_integet(s);
    }

    if(divisible_8(nums) == 1)
        cout << "Divible by 8" << endl;
    else
        cout << "not divisible by 8";
}



int main()
{
    string s = "54141111648421214584416464555";
    method01(s);

    // method02(s)  use of predefine library 
    return 0;
}