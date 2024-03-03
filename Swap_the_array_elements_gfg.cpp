#include <iostream>
#include <vector>
using namespace std;

void swapElement(vector<int> &a)
{
    for(int i = 0;i < a.size() - 2;i++)
    {
        swap(a[i],a[i + 2]);
    }
}

int main()
{
    vector<int> a{1,2,3,4,5};
    swapElement(a);

    for(auto v : a)
        cout << v << " ";
}