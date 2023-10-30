#include <iostream>
using namespace std;

int main()
{
    int n = 6;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j <= i || j >= 2 * n - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}