#include <iostream>
#include <cmath>
using namespace std;

int find_sqaure(int n)
{
    int key = n;
    int start = 0;
    int end = n;
    int mid = (start + end) / 2;
    int index = 0;

    while (start <= end)
    {
        if (pow(mid, 2) == key)
            return mid;

        else if (pow(mid, 2) > key)
            end = mid - 1;

        else
        {
            index = mid;
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }
    return index;
}

int main()
{
    int n; 
    cout << "Enter N:";
    cin >> n;

    cout << "Square of " << n << " is " << find_sqaure(n);
    return 0;
}
