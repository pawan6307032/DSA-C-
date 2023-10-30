#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {7, 10, 4, 3, 20, 15};
    // bubble_sort(a);
    int n = sizeof(a) / sizeof(int);

    sort(a, a + n);

    for (auto i : a)
        cout << i << " ";

    // int n = a.size() - 1;

    // cout<<a[n-3];
    return 0;
}