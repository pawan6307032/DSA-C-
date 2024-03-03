#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int binary_search(vector<int> a, int k, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (a[mid] == k)
            return mid;
        else if (a[mid] > k)
            return binary_search(a, k, start, mid - 1);
        else
            return binary_search(a, k, start + 1, end);
    }
}

int linear_search(vector<int> a, int v)
{
    vector<int> b;
        for(auto i : a)
        {
            if(i != v)
                b.push_back(i);
        }

        // return a.size();

    cout << endl;
     for (auto j : b)
        cout << j << " ";
    cout << endl;
    return b.size();
}

int main()
{
    vector<int> a{0,1,2,2,3,0,4,2};
    int x = linear_search(a, 2);
    cout << x << endl;
    for (auto v : a)
        cout << v << " ";
    return 0;
}