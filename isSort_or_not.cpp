#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& a,int& n,int& i)
{
    if(i == n - 1)
        return true;
    
    if(a[i+1] < a[i])
        return false;
    
    return isSorted(a,n,++i);
}

int main()
{
    vector<int> a{4,3,1,2,4,4};
    int i = 0;
    int n = a.size();

    int v = isSorted(a, n, i);
    if (v)
        cout << "Sorted";
    else
        cout << "Not Sorted";
    return 0;
}