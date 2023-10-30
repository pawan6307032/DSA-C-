#include <iostream>
using namespace std;

int exponention(int a,int b)
{
    int ans = 1;
    while(b > 0)
    {
        if(b & 1)
            ans *= a;
        
        a *= a;
        b >>= 1;
    }
    return ans;
}
int main()
{
    int a,b;

    cout << "Enter A,B : ";
    cin >> a >> b;
    cout << exponention(a,b);

    return 0;
}