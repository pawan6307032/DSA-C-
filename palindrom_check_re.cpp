#include <iostream>
#include <string>
using namespace std;

bool isPalindrom(string a, int start, int end)
{
    if (start > end)
        return true;

    if (a[start] != a[end])
        return false;

    return isPalindrom(a, ++start, --end);
}

int main()
{
    string str = "racectar";
    bool check = isPalindrom(str, 0, str.length() - 1);

    if (check)
        cout << "True";
    else
        cout << "False";
    return 0;
}