#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> a)
{
    for (auto value : a)
        cout << value << " ";
}


// merge Sort with taking left most element

// int partition(vector<int> &a, int start, int end)
// {
//     int pivotElement = a[start];
//     int count = end;

//     for (int i = end; i > start; i--)
//     {
//         if (a[i] > pivotElement)
//         {
//             swap(a[count--], a[i]);
//         }
//     }
//     swap(a[start], a[count]);
//     return count;
// }


// merge Sort with taking right most element
int partition(vector<int>& a,int start,int end)
{
    int pivotElement = a[end];
    int count = start - 1;

    for(int i = start;i<end;i++)
    {
        if(a[i] <= pivotElement)
        {
            count++;
            swap(a[count],a[i]);
        }
    }
    swap(a[count + 1],a[end]);
    return count + 1;
}

void mergeSort(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partition(a, start, end);
        mergeSort(a, start, pivotIndex - 1);
        mergeSort(a, pivotIndex + 1, end);
    }
}



int main()
{
    vector<int> a{8, 1, 20, 6, 5, 60, 5};
    int start = 0;
    int end = a.size() - 1;
    mergeSort(a, start, end);
    display(a);
    return 0;
}