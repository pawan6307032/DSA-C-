#include <iostream>
#include <string>
using namespace std;

void backtracking(string &str, int i)
{
    if (i >= str.length())
    {
        cout << str << " ";
        return;
    }

    for (int j = i; j < str.length(); j++)
    {
        swap(str[i], str[j]);
        backtracking(str, ++i);
        swap(str[i], str[j]);
    }
}

int main()
{
    string str = "abcd";
    backtracking(str, 0);
    return 0;
}