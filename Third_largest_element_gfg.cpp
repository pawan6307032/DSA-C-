#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int problem(vector<int> a)
{
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());

    if(a.size() <= 2)
        return -1;
    
    return a[2];
}

int main()
{
    vector<int> a{2,4,1,3,5};
    int ans = problem(a);
    cout << ans;
    return 0;
}