#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &a, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
            temp.push_back(a[i++]);
        else
            temp.push_back(a[j++]);
    }

    while (i <= mid)
        temp.push_back(a[i++]);

    while (j <= end)
        temp.push_back(a[j++]);

    for (int i = start; i <= end; i++)
        a[i] = temp[i - start];
}

void merge_sort(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        merge_sort(a, start, mid);
        merge_sort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

void combination(int i, int target, vector<int> a, vector<int> small, vector<vector<int>> &big)
{
    // base case
    if (i == a.size())
    {
        if (target == 0)
        {
            big.push_back(small);
        }
        return;
    }

    // include
    if (a[i] <= target)
    {

        small.push_back(a[i]);
        combination(i + 1, target, a, small, big);
    }

    // exclude
    combination(i + 1, target, a, small, big);
}

vector<vector<int>> findCombination(vector<int> &a, int target)
{
    vector<vector<int>> big;
    vector<int> small;
    combination(0, target, a, small, big);
    return big;
}

int main()
{
    vector<int> a{10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    // sort(a.begin(),a.end());
    merge_sort(a, 0, a.size() - 1);
    vector<vector<int>> ans = findCombination(a, target);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
    }
    cout << endl;
}