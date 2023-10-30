#include <iostream>
using namespace std;

int main()
{
    int a[][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {9, 11, 13}};
    int transpore[3][3];

    for (int i = 0; i < 3; i++)
    {
        // sum = 0;
        {
            for (int j = 0; j < 3; j++)
                transpore[j][i] = a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        // sum = 0;
        {
            for (int j = 0; j < 3; j++)
                cout << transpore[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}