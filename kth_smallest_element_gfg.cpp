#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(int a[],int n)
{
    cout << endl;
    for(int i = 0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;

    for(int i = 0;i< n;i++)
        cout << i << " ";

}

int problem(int a[],int n,int k)
{
    sort(a , a + n);
    
    return a[k - 1];
}


int main()
{
    int a[] = {7, 10, 4,3,  20, 15};
    int n = sizeof(a)/sizeof(int);
    int k = 3;
    int ans = problem(a,n,k);
    cout << ans;
    
    return 0;
}