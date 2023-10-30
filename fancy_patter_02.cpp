#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j % 2 == 0)
                cout << count++ << " " << count++;
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}