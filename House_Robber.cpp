#include<iostream>
#include <vector>
using namespace std;

int rob(vector<int>& a,int i,int sum)
{
    if(i >= a.size())
        return sum;
    
    sum += a[i];

    rob(a,i+2,sum);
}

int main()
{
    vector<int>a{1,2};
    int sum = 0;
    int sum1 = rob(a,0,sum);
    int sum2 = rob(a,1,sum);

    cout << max(sum1,sum2);
    return 0;
}