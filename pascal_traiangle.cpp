#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row = 5;
    vector<vector<int>>arr(row,vector<int>(5,-1));

    // for(int i = 0;i<arr.size();i++)
    // {
    //     for(int j = 0;j<i+1;j++)
    //     {
    //         cout<<i<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    for(auto i = 0;i<arr.size();i++)
    {
        for(auto j = 0;j<i+1;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    // int n;
    // cout<<"Enter N:";
    // cin>>n;

    // int a[n][n];

    // for(int i = 0;i<n;i++)
    // {
    //     for(int j = 0;j<i+1;j++)
    //     {
    //         cout<<i<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}