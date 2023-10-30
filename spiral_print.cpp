#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrix(int n)
{
    vector<vector<int>> a(n, vector<int>(n));

    int top = 0;
    int down = n - 1;
    int left = 0;
    int right = n - 1;
    int dir = 0;
    int i, k = 1;

    while (top <= down && left <= right)
    {
        if (dir == 0)
        {
            for (i = left; i <= right; i++)
                a[top][i] = k++;
            top++;
        }

        else if (dir == 1)
        {
            for (i = top; i <= down; i++)
                a[i][right] = k++;
            right--;
        }

        else if (dir == 2)
        {
            for (i = right; i >= left; i--)
                a[down][i] = k++;
            down--;
        }

        else if (dir == 3)
        {
            for (i = down; i >= top; i--)
                a[i][left] = k++;
            left++;
        }

        dir = (dir + 1) % 4;
    }

    return a;
}

int main()
{
    int n = 3;
    vector<vector<int>> a = (matrix(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}