#include <iostream>
using namespace std;

void display(int a[],int n)
{
    for(int i = 0;i<n;i++)
    cout<<a[i]<<" ";

    cout<<endl;
}

void increment(int a[],int n)
{
    for(int i = 0;i<n;i++)
        a[i] *= 10;

    display(a,n);
}

int main()
{
    int a[5];
    int n = sizeof(a)/sizeof(int);

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter N:";
        cin >> a[i];
    }

    

    increment(a,n);

    display(a,n);

    return 0;
}