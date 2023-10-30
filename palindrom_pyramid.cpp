#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int i, j, k;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            char ch = 65 + j + 1 - 1;
            cout << ch << " ";
        }

        for (k = j - 1; k > 0; k--)
        {
            char ch = 65 + k - 1;
            cout << ch << " ";
        }

        cout << endl;
    }
    return 0;
}