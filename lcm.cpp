#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return (gcd(b,a%b));
}

int main()
{
    int a = 5, b = 3;
    int lcm = (a*b)/gcd(a, b);
    cout << lcm;
    return 0;
}