#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<vector<int>> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << ",";
        }
        cout << "]";
        cout << endl;
    }
    cout << endl;
}

void subset(int i, vector<int> a, vector<int> small_array, vector<vector<int>> &big_array)
{
    if (i >= a.size())
    {
        big_array.push_back(small_array);
        return;
    }

    subset(i + 1, a, small_array, big_array);

    small_array.push_back(a[i]);
    subset(i + 1, a, small_array, big_array);
}
int main()
{
    vector<int> a{1,2,3};
    vector<vector<int>> big_array;
    vector<int> small_array;

    subset(0, a, small_array, big_array);
    reverse(big_array.begin(), big_array.end());
    display(big_array);
    return 0;
}