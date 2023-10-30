#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int display(vector<int>a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != INT_MIN)
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}

int union_(vector<int> a, vector<int> b)
{
    vector<int> c;

    for(int i = 0;i<a.size();i++)
    {
        c.push_back(a[i]);
    }


    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (c[i] == b[j])
            {
                b[j] = INT_MIN;
                c.push_back(b[j]);
                
            }
        }
    }
    display(c);
    return 0;
}

int main()
{
    vector<int> a{1, 2, 3, 3, 4, 6, 8};
    vector<int> b{2, 3, 3, 5, 7};

    union_(a, b);
    return 0;
}