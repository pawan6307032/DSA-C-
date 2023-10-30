#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find_MAx(vector<int> a)
{
    int start = 0;
    int end = a.size() - 1;

    int max = 0;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] > max)
        {
            max = mid;
        }
    }
}

int main()
{
    vector<int> a{0, 10, 5, 2};
    cout << find_MAx(a);

    return 0;
}