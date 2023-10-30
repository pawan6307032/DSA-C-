#include <iostream>
using namespace std;

void reverse(int n)
{
    if (n == 0)
        return;
    else 
    {
        cout << n << " ";  
        reverse(n-1);
    }
}

int main()
{
    int n = 10;
    // cout << "Enter N :";
    // cin >> n;

    reverse(n);
    return 0;
}