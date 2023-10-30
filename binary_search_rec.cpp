#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int>& a, int start, int end, int key)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] > key)
            return binary_search(a, start, mid - 1, key);
        else
            return binary_search(a, mid + 1, end, key);
    }
    return -1;
}

int main()
{
    vector<int> a{10, 20, 30, 40, 50};
    cout << binary_search(a, 0, a.size(), 140);

    return 0;
}