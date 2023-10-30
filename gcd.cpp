#include <iostream>
using namespace std;

int gcd(int a,int b = 0)
{
    if(b == 0)
        return a;
    else
        return (gcd(b,a%b));
}

int main()
{
    int a = 24,b = 72;
    int c = gcd(a,b);
    cout << c;

    return 0;
}