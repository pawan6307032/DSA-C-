#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void addition(string a, string b)
{
    string ans = "";
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;

    while (i >= 0 && j >= 0)
    {
        int x = int(a[i]) + int(b[j]) + carry;
        int digit = x % 10;
        ans.push_back(char(digit));
        carry = x / 10;
        i--;
        j--;
    }

    while (i >= 0)
    {
        int x = int(a[i]) + carry;
        int digit = x % 10;
        ans.push_back(char(digit));
        carry = x / 10;
        i--;
    }

    while (j >= 0)
    {
        int x = int(b[j]) + carry;
        int digit = x % 10;
        ans.push_back(char(digit));
        carry = x / 10;
        j--;
    }

    if (carry)
        ans.push_back(carry + '0');

    reverse(ans.begin(), ans.end());

    for(auto value : ans)
        cout << value << " ";
}

int main()
{
    string a = "11";
    string b = "123";
    addition(a, b);
    return 0;
}