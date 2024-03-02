// First element to occur k times

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int problem(vector<int>a,int k)
{
    unordered_map <int,int> ans;
    for(int i = 0;i<a.size();i++)
    {
        ans[a[i]]++;
        if(ans[a[i]] >= k)
            return a[i];
    }
    return -1;
}

int main()
{
    vector<int> a{1, 7, 4, 3, 4, 8, 7};
    int k = 2;
    int ans = problem(a,k);
    cout << ans;
    return 0;
}