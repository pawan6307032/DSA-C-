#include <iostream>
#include <vector>
using namespace std;

void display(int a[],int n)
{
    for(int i = 0;i < n;i++)
        cout << a[i] << " ";
    cout << endl;
}

int* play_with_or(int a[],int n)
{   int brr[5];
    int i = 0;
    for(i = 0;i<n - 1;i++)
    {
        int x = a[i] | a[i + 1];
        brr[i] = x;
    }
    brr[i] = a[i];

    return brr;    
}

int main()
{
    int a[] = {5, 9, 2, 6};
    int n = sizeof(a)/sizeof(int);
    play_with_or(a,n);
    display(a,n);
    return 0;
}