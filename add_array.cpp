#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> addition(vector<int> a, vector<int> b)
{
    int carray = 0;
    vector<int> add;
    int i = a.size() - 1;
    int j = b.size() - 1;

    while (i >= 0 && j >= 0)
    {
        int x = a[i] + b[j] + carray;
        int digit = x % 10;
        add.push_back(digit);
        carray = x / 10;
        i--;
        j--;
    }

    while (i >= 0)
    {
        int x = a[i] + 0 + carray;
        int digit = x % 10;
        add.push_back(digit);
        carray = x / 10;
        i--;
    }

    while (j >= 0)
    {
        int x = 0 + b[j] + carray;
        int digit = x % 10;
        add.push_back(digit);
        carray = x / 10;
        j--;
    }

    if (carray)
        add.push_back(carray);

    reverse(add.begin(),add.end());
    
    return add;
}

int main()
{
    vector<int> a{8,5,4,4,0};
    vector<int> b{8,3,0};

    vector<int>ans = addition(a, b);

    for(auto value : ans)
        cout<< value ;
    return 0;
}
