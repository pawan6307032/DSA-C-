#include <iostream>
#include <vector>
using namespace std;

void display(vector<vector<char>> a, int n, int &count)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

bool isSafe(int row, int col, vector<vector<char>> &a, int n)
{
    int i = row;
    int j = col;
    // left row
    while (j >= 0)
    {
        if (a[i][j] == 'Q')
            return false;
        j--;
    }

    // left up diagonal
    i = row;
    j = col;
    while (i >= 0 && j >= 0)
    {
        if (a[i][j] == 'Q')
            return false;
        i--;
        j--;
    }

    // left down
    i = row;
    j = col;
    while (i < n && j >= 0)
    {
        if (a[i][j] == 'Q')
            return false;
        i++;
        j--;
    }
    return true;
}

void solve(vector<vector<char>> &a, int col, int n, int &count)
{
    if (col >= n)
    {
        display(a, n, count);
        cout << "Total : " << count << endl;
        count++;
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, a, n))
        {
            a[row][col] = 'Q';
            solve(a, col + 1, n, count);
            a[row][col] = '-';
        }
    }
}

int main()
{
    int n = 9;

    vector<vector<char>> a(n, vector<char>(n, '-'));
    int col = 0;
    int count = 0;
    solve(a, col, n, count);
    cout << endl;
    cout << "Count" << count << endl;
    return 0;
}