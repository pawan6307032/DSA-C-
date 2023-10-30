#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void display(vector<string> ans)
{
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}

void solve(vector<string> &ans, int index, string output, string digits, vector<string> &v)
{
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int digit = digits[index] - '0';
    string value = v[digit];

    for (int i = 0; i < value.length(); i++)
    {
        char ch = value[i];
        output.push_back(ch);
        solve(ans, index + 1, output, digits, v);
        output.pop_back();
    }
}

vector<string> input(string &digits)
{
    vector<string> ans;
    int index = 0;
    string output = "";
    vector<string> v(9);
    v[2] = "abc";
    v[3] = "def";
    v[4] = "ghi";
    v[5] = "jkl";
    v[6] = "mno";
    v[7] = "pqrs";
    v[8] = "tuv";
    v[9] = "wxyz";

    solve(ans, index, output, digits, v);
    return ans;
}
int main()
{
    string digits;
    cout << " Enter Digits : ";
    cin >> digits;

    vector<string> ans = input(digits);
    display(ans);

    return 0;
}