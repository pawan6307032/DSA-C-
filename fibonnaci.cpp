#include <iostream>
using namespace std;

int fac(int n)
{
    if( n <= 1)
        return n;
    else
        return fac(n-1) + fac(n - 2);
}

int main()
{
    int n = 5;
    for(int i = 0;i<n;i++)
        cout << fac(i) << " ";
    return 0;
}