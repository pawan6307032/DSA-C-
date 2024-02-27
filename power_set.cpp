#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void display(vector<string>a)
{
    for(auto value : a)
        cout << value << " ";
    cout << endl;
}

void power_set(int i,string s,int n,string curr,vector<string> &ans)
{
    if(i == n)
    {
        if(curr.size() > 0)
        {
            ans.push_back(curr);
            return;
        }
    }

    power_set(i+1,s,n,curr + s[i],ans);
    power_set(i+1,s,n,curr,ans);
}

int main()
{
    string s = "abc";
    int n = s.size();
    string curr = " ";  // space is required between the quots
    vector<string>ans;

    power_set(0,s,n,curr,ans);
    sort(ans.begin(),ans.end());
    display(ans);
    return 0;
}