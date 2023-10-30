#include <iostream>
using namespace std;

void counting(int n)
{
    if (n == 0)
        return;
    else 
    {
        counting(n-1);
        cout << n << " ";  
    }
}

int main()
{
    int n = 10;
    // cout << "Enter N :";
    // cin >> n;

    counting(n);
    return 0;
}