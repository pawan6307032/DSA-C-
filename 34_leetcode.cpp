#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a{5,7,7,8,8,10};
    int ans = binary_search(a.begin(),a.end(),8);
    reverse(a.begin(),a.end());
    int ans2 = binary_search(a.begin(),a.end(),8);
    cout << ans << endl;
    cout << ans2;
    return 0;
}