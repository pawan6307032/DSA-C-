// Intersection

#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

int main()
{
    vector<int> a{1, 2, 3, 3, 4, 6, 8};
    vector<int> b{2, 3, 3, 4, 6};

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                b[j] = INT_MIN;
                cout << a[i] << " ";
            }
        }
    }
    cout << endl;
}