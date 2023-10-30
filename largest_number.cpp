#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool maxi(string a,string b)
{
    string t1 = a + b;
    string t2 = b + a;

    return t1 < t2;

    
}

string largest_Number(vector<int> nums)
{
    vector<string> snums;

    for(auto value : nums)                  // O(n)
        snums.push_back(to_string(value));
    
    sort(snums.begin(),snums.end(),maxi);       // O(nlog n)

    if(snums[0] == "0")         // O(1)
        return "0";

    string ans = "";

    for(auto value : snums)         // O(n)
        ans += value;

    return ans;         // Total time  = O(n);

}

int main()
{
    int n = 310;

    vector<int>a;

    while(n>0)
    {
        int x = n%10;
        a.push_back(x);
        n = n/10;
    }

    cout << largest_Number(a);

    return 0;
}