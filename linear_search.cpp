//  Linear search

#include <iostream>
using namespace std;

int linear_search(int a[], int n, int key)
{
    for(int i = 0;i<n;i++)
    {
        if(key == a[i])
        return 1;
        else
        return 0;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    int key;
    cout << "Enter Key :";
    cin >> key;

    int res = linear_search(a, n, key);
    if (res == 1)
    cout<<"found";
    else
    cout<<"not found";

    return 0;
}
