#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(vector<int> &a, int target)
{
    if (target == 0)
        return 0;
    if (target < 0)
        return INT_MAX;

    int mini = INT_MAX;
    for (int i = 0; i < a.size(); i++)
    {
        int ans = solve(a, target - a[i]);
        if (ans != INT_MAX)
            mini = min(mini, ans + 1);
    }
    return mini;
}

int main()
{
    vector<int> a{5,2};
    int target = 7;
    cout << "Ans : " << solve(a, target);
    return 0;
}