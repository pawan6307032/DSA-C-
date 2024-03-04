#include <iostream>
#include <vector>
using namespace std;

void display(vector<vector<int>> a)
{
    for(auto i : a)
    {
        for(auto j : i)
            cout << j << " ";
        cout << endl;
    }
    cout << endl;
}

void combination(int i,int target,vector<int>a,vector<int>small,vector<vector<int>>&big)
{
    // base case
    if(i == a.size())
    {
        if(target == 0)
            big.push_back(small);
        return;
    }

    // include
    if(a[i] <= target)
    {
        small.push_back(a[i]);
        combination(i,target - a[i],a,small,big);
        small.pop_back();
    }

    // exclude
    combination(i + 1,target,a,small,big);
}

vector<vector<int>> findCombination(vector<int>a,int target)
{
    vector<vector<int>> big;
    vector<int> small;
    int index = 0;
    combination(index,target,a,small,big);
    return big;
}

int main()
{
    vector<int> a{2,3,6,7};
    int target = 7;
    vector<vector<int>> ans = findCombination(a,target);
    display(ans);
    return 0;
}