#include <iostream>
#include <vector>
using namespace std;

int display(vector<int> a)
{
    for (auto value : a)
        cout << value << " ";
    cout << endl;
    return 0;
}

int sort_(vector<int> a)
{
    // int n = a.size();
    for (int i = 0; i < (a.size() - 1); i++)
    {
        for (int j = 0; j < (a.size() - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    display(a);
    return 0;
}

int main()
{
    vector<int> v{1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    sort_(v);

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v{1, 5, 8, 9, 6, 7, 3, 4, 2, 0};

//     sort(v.begin(), v.end());

//     cout << "Sorted \n";
//     for (auto x : v)
//         cout << x << " ";

//     return 0;
// }