#include <iostream>
#include <vector>
using namespace std;


int findUnique(vector<int>a)
{
    int ans = 0;

    for(int i = 0;i<a.size();i++)
    ans = ans ^ a[i];

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < a.size(); i++)
        cin >> a[i];

    cout << endl;
    
    int res = findUnique(a);
    cout<<res;
    return 0;
}