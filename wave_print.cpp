#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>>a{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int j = 0; j < a.size(); j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < a.size(); i++)
                cout << a[i][j] << " ";
        }
        else
        {
            for (int i = a.size() - 1; i >= 0; i--)
                cout << a[i][j] << " ";
        }
    }
    return 0;
}