#include <iostream>
#include <vector>
using namespace std;

int peak_element(vector<int> a,int start,int end)
{
    int mid;
    if(start < end)
   {
    mid = start + (end - start)/2;
    if(a[mid] < a[mid + 1])
        peak_element(a,mid + 1,end);
    else
        peak_element(a,start,mid);
   }
   return mid;
}

int main()
{
    vector<int> a{1, 1, 1, 2, 1, 1, 1};
    cout << peak_element(a,0,a.size() - 1);
    return 0;
}