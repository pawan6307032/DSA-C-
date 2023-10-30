#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string a = "abcde";
    string goal = "cdeab";

    for(int i = 0;i<1;i++)
    {
        char temp = a[a.length() - 1];

        for(int j = a.length() - 1;j>=0;j--)
            a[j - 1] = a[j];
    }

    for(auto i : a)
        cout << i << " ";
    return 0;
}