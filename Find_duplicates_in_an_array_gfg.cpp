#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> dublicate(vector<int> a)
{
    vector<int> b;
    sort(a.begin(), a.end());

    int i = 0;
    int j = 1;
    while (i < a.size() && j < a.size())
    {
        if (a[i] == a[j])
            b.push_back(a[i]);
        i++;
        j++;
    }
    return b;
}

int problem(vector<int> a)
{
    vector<int> b = dublicate(a);
    if (!b.empty())
        return 1;
    return -1;
}

int main()
{
    int a[] = {13 ,3, 4, 12, 3, 12, 3, 4, 4, 12, 7, 11, 6, 5};
    int n = 14;
    sort(a,a+n);
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        b.push_back(a[i]);
    }
    
    for(auto v : b)
        cout << v << " ";
    return 0;
}