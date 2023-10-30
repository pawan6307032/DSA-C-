#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter N:";
    cin >> n;

    int i, j, k;
    int sum = 1;

    for (i = 0; i < n - 1; i++)
    {
        // space with j
        for (j = 0; j < (n - i - 1); j++)
            cout << " ";

        // star and space with k
        if (i == 0)
        {
            for (k = 0; k < sum; k++)
                cout << "*";
        }
        else if (i > 0 && i < n - 1)
        {
            cout << "*";
            for (k = 0; k < sum - 2; k++)
            {
                cout << " ";
            }
            cout << "*";
        }

        // space with j
        for (j = 0; j < (n - i - 1); j++)
            cout << " ";

        cout << endl;
        sum += 2;
    }

    for (i = 0; i < sum; i++)
        cout << "*";

    return 0;
}