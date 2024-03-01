#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int problem(vector<int> a)
{
    int maxi = INT_MIN;
    int mini = a[0];
    int profit = 0;

    for (int i = 1; i < a.size(); i++)
    {
        int curr = a[i] - mini;
        maxi = max(maxi, curr);
        mini = min(mini, curr);
    }
    // cout << mini << endl;
    cout << maxi << endl;
}

int main()
{
    vector<int> a{10, 22, 5, 75, 65, 80};
    int ans = problem(a);
    // cout << ans;
    return 0;
}