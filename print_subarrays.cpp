#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& a, int& start, int& end)
{
    if (end > a.size() - 1)
        return;

    for (int i = start; i <= end; i++)
        cout << a[i] << " ";
    cout << endl;

    print(a, start, ++end);
}

int main()
{
    vector<int> a{1, 2, 3, 4, 5};
    for (int start = 0; start < a.size(); start++)
    {
        int end = start;
        print(a, start, end);
        cout << endl;
    }

    return 0;
}