#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    int k = n;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = 0; j < k; j++)
        {
            if (j < n - i - 1)
                cout << "  ";
            else if (j <= n - 1)
            {
                cout << count++ << " ";
            }
            else if (j == n)
            {
                count = count - 2;
                cout << count << " ";
                count--;
            }
            else
            {
                cout << count-- << " ";
            }
        }
        k++;
        cout << endl;
    }

    return 0;
}