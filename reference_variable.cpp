#include <iostream>

int* solve()
{
    int a = 5;
    int *ans = &a;
    return ans;
}

int main()
{
    int ptr = *solve();
    cout << ptr;
    
    return 0;
}
