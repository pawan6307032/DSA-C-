#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int findMissing(vector<int> a)
{
    // for(int i = 0;i < a.size();i++)
    //   {
    //     int index = abs(a[i]);

    //     if(a[index-1] > 0)
    //       a[index-1] *= -1;
    //   }

    // for(int i = 0;i<a.size();i++)
    //   {
    //     if(a[i] > 0)
    //       cout<<i+1<<" ";
    //   }

    sort(a.begin(), a.end());

    for (int i = 1; i <= a.size(); i++)
    {
        if (a[i] != i )
            cout << i  << " missing" << endl;
    }

    // for(auto value : a)
    //   cout<< value <<" ";

    return 0;
}

int main()
{
    vector<int> a{1,3,3,3,3};
    findMissing(a);
    return 0;
}