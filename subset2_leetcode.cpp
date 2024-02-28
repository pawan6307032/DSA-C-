#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<vector<int>> a)
{
    for (auto i : a)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
}

void power_set(int i, vector<int> a, vector<int> output, vector<vector<int>> &ans, int &count)
{
    if (i >= a.size())
    {
        ans.push_back(output);
        count++;
        return;
    }

    // include
    output.push_back(a[i]);
    power_set(i + 1, a, output, ans, count);
    output.pop_back();

    while (i + 1 < a.size() && a[i] == a[i + 1]) {
            i++;
        }
    // exclude
    power_set(i + 1, a, output, ans, count);
}

int main()
{
    int count = 0;
    vector<int> a{4,4,4,1,4};
    sort(a.begin(),a.end());

    vector<int> output;
    vector<vector<int>> ans;

    power_set(0, a, output, ans, count);
    display(ans);
    cout << "Count : " << count;
    return 0;
}