#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int set;
    vector<int> a{3, 1, 4, 1, 5};
    int k = 2;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[j] != set)
            {
                if (abs(a[i] - a[j]) == k)
                {
                    cout << a[i] << " " << a[j] << " ";
                    set = a[j];
                }
                cout << endl;
            }
        }
        
    }

    return 0;
}