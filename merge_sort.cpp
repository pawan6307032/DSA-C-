#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a)
{
    cout << endl;

    for (auto value : a)
        cout << value << " ";
}

void merge(vector<int> &a, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
            temp.push_back(a[i++]);
        else
            temp.push_back(a[j++]);
    }

    while (i <= mid)
        temp.push_back(a[i++]);

    while (j <= end)
        temp.push_back(a[j++]);

    for (int i = start; i <= end; i++)
        a[i] = temp[i - start];

    // display(temp);
}

void mergeSort(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

int main()
{
    vector<int> a{2, 4, 6, 3, 8, 3, 5, 2, 4, 5, 7, 9, 11};
    mergeSort(a, 0, a.size() - 1);
    display(a);

    return 0;
}