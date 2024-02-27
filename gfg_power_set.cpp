// Given a string s of length n, find all the possible subsequences of the string s in lexicographically-sorted order.

// Example 01:

// Input : 
// s = "abc"
// Output: 
// a ab abc ac b bc c
// Explanation : 
// There are a total 7 number of subsequences possible 
// for the given string, and they are mentioned above 
// in lexicographically sorted order.

// (https://www.geeksforgeeks.org/problems/power-set4302/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article)[Power Set]

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<string> a)
{
    for (auto value : a)
        cout << value << " ";
    cout << endl;
}

void power_set(int i, string s, int n, string curr, vector<string> &ans)
{
    if (i == n)
    {
        if (!curr.empty())
            ans.push_back(curr);
        return;
    }

    power_set(i + 1, s, n, curr + s[i], ans);
    power_set(i + 1, s, n, curr, ans);
}

vector<string> AllpossibleString(string s)
{
    int n = s.size();
    string curr = "";
    vector<string> ans;

    power_set(0, s, n, curr, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s = "abc";
    vector<string> ans = AllpossibleString(s);
    display(ans);
    return 0;
}