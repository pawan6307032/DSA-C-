#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 10, k = 2;

    k = (1<<k);

    cout<<(k | n);
    

    return 0;
}