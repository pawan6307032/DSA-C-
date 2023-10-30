#include <iostream>
#include <string>
using namespace std;

string integer2roman(int nums)
{
    string romanNum[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

    string ans = "";

    for(int i = 0;i<13;i++)
    {
        while(nums >= values[i])
        {
            ans = ans + romanNum[i];
            nums = nums - values[i];
        }
    }
    return ans;
}

int main()
{
    int nums;

    cout << "Enter N :";
    cin >> nums; 
    
    string ans = integer2roman(nums);
    cout << ans;
    return 0;
}