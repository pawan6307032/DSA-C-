#include <iostream>
using namespace std;

int display(int *arr, int n, int i, int mini)
{

    if (i >= n)
    {
        return mini;
    }
    else
    {
        if (mini > *(arr + i))
            mini = *(arr + i);

        display(arr + i, --n, i++, mini);
    }
}

int main()
{
    int a[] = {70, 20, 30, 0, 50};
    int n = sizeof(a) / sizeof(int);
    int i = 0;
    int mini = a[i];
    cout << display(a, n, i, mini);
    return 0;
}