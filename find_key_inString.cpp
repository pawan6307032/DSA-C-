#include <iostream>
#include <string>
using namespace std;

bool checkKey(string str, int n, int i, char key)
{
    if (i >= n)
        return false;

    else if (str[i] == key)
        return true;

    return checkKey(str, i++, n, key);
}

int main()
{
    string str = "PawanKumar";
    int n = str.length();
    int i = 0;
    char key = 'r';
    cout << checkKey(str, n, i, key);
    return 0;
}