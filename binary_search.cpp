#include <bits/stdc++.h>
#include <vector>
using namespace std;

int binary_search(vector<int> a, int key, int start, int end)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;

        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            return binary_search(a, key, mid + 1, end);
        else
            return binary_search(a, key, start, mid - 1);
    }
    return -1;
}

int main()
{
    vector<int> a{2,4,6,8,10,12,14};
    int key;

    sort(a.begin(), a.end());

    for(auto i : a)
        cout<<i<<" ";
    cout<<endl;

    cout << "Enter Key :";
    cin >> key;

    int res = binary_search(a, key, 0, a.size());

    if (res == -1)
        cout << "Not Found";
    else
        cout << "Target Found at "<<res;

    return 0;
}