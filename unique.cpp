#include <iostream>
#include <vector>
using namespace std;

int found(vector<int> a)
{
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int ans = ans ^ a[i];
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter size:";
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < a.size(); i++)
        cin >> a[i];

    int element = found(a);
    cout << element;
}