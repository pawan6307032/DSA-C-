#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row = 3;
    vector<vector<int>> a(row, vector<int>(5, 0));

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}