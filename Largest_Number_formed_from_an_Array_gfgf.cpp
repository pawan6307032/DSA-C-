#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<string> a)
{
    for(auto i : a)
        cout << i << " ";
    cout << endl;
}

bool comp(string a,string b)
{
    string s1 = a + b;
    string s2 = b + a;

    return s1 > s2 ? true : false;
}

int main()
{
    vector<string> a{
        "3", "30", "34", "5", "9"
    };
    display(a);
    sort(a.begin(),a.end(),comp);
    display(a);
    string ans = "";

    for(auto i: a) {
        ans += i;
    }

    cout << ans;
    return 0;
}