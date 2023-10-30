#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSafe(int row, int col, int srcX, int srcY, int a[][3], vector<vector<bool>> &visited)
{
    if (((srcX >= 0 && srcX < row) && (srcY >= 0 && srcY < col)) && (a[srcX][srcY] == 1) && (visited[srcX][srcY] == false))
        return true;
    else
        return false;
}

void solve(int row, int col, int srcX, int srcY, int a[][3], vector<vector<bool>> &visited, vector<string> &path, string ans)
{
    if (srcX == row - 1 && srcY == col - 1)
    {
        path.push_back(ans);
        return;
    }

    // Down i + 1    j
    if (isSafe(row, col, srcX + 1, srcY, a, visited))
    {
        visited[srcX + 1][srcY] = true;
        solve(row, col, srcX + 1, srcY, a, visited, path, ans + 'D');
        visited[srcX + 1][srcY] = false;
    }

    // Left i j - 1
    if (isSafe(row, col, srcX, srcY - 1, a, visited))
    {
        visited[srcX][srcY - 1] = true;
        solve(row, col, srcX, srcY - 1, a, visited, path, ans + 'L');
        visited[srcX][srcY - 1] = false;
    }

    // Right i j + 1
    if (isSafe(row, col, srcX, srcY + 1, a, visited))
    {
        visited[srcX][srcY + 1] = true;
        solve(row, col, srcX, srcY + 1, a, visited, path, ans + 'R');
        visited[srcX][srcY + 1] = false;
    }

    // Up
    if (isSafe(row, col, srcX - 1, srcY, a, visited))
    {
        visited[srcX - 1][srcY] = true;
        solve(row, col, srcX - 1, srcY, a, visited, path, ans + 'U');
        visited[srcX - 1][srcY] = false;
    }
}

int main()
{
    int a[][3] = {
        {1, 0, 0},
        {1, 1, 0},
        {1, 1, 1}};

    if (a[0][0] == 1)
    {
        cout << "Not path exist";
        return 0;
    }

    int row = 3;
    int col = 3;

    vector<vector<bool>> visited(row, vector<bool>(col, false));
    visited[0][0] = true;

    vector<string> path;
    string ans = "";

    solve(row, col, 0, 0, a, visited, path, ans);

    for (auto value : path)
        cout << value << " ";
    cout << endl;

    if (path.size() == 0)
    {
        cout << ("No Path exist") << endl;
    }
    return 0;
}