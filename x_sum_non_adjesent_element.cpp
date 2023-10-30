#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void solve(vector<int> &a, int i, int sum, int &maxi)
{
    if (i >= a.size())
    {
        maxi = max(sum, maxi);
        return;
    }

    solve(a, i + 2, sum + a[i], maxi);
    solve(a, i + 1, sum, maxi);
}

int main()
{
    vector<int> a{2, 1, 4, 9};
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;
    solve(a, i, sum, maxi);
    cout << maxi;
    return 0;
}