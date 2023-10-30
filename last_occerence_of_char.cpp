#include <iostream>
#include <string>
using namespace std;

void printLR(string &str, char x, int &i, int &ans)
{
    if (i >= str.length())
        return;

    if (str[i] == x)
        ans = i;
    printLR(str, x, ++i, ans);
}

void printRL(string &str, char x, int i, int &ans)
{
    if (i < 0)
        return;

    if (str[i] == x)
    {
        ans = i;
        return;
    }
    printRL(str, x, --i, ans);
}

int main()
{
    string str = "abcddedg";
    char x = 'g';
    int ans = -1;
    int i = 0;
    printRL(str, x, i, ans);
    cout << ans;
    return 0;
}