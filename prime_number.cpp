#include <iostream>
#include <vector>
using namespace std;

void display(vector<bool> a)
{
    for (auto i : a)
        cout << i << " ";
}

int countPrime(int n)
{
    if (n == 0)
        return 0;

    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    int ans = 0;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            ans++;

            int j = 2 * i;
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }

    display(prime);
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;

    int count = countPrime(n);
    cout << count;
}