#include <iostream>
#include <math.h>
using namespace std;

int solve(int x)
{
    int ans = 0;
    int i = 0;
    while (x < 0)
    {
        int n = x % 10;
        ans += pow(10, i++) * n;
        x = x / 10;
    }
    return ans;
}

int reverse(int x)
{
    int ans = solve(x);
    if (x < 0)
        return ans * (-1);
    else
        return ans;
}

int main()
{
    int x = 189;
    int ans = solve(x);
    cout << ans;
    return 0;
}