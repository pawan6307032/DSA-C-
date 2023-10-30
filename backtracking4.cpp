#include <iostream>
#include <vector>
#include <string>
using namespace std;

void display(vector<string>path)
{
    for(auto i : path)
        cout << i << " ";
    cout << endl;
}

void solve(vector<string>&path,int open,int close,string out)
{
    if(open == 0 && close == 0)
    {
        path.push_back(out);
        return;
    }

    //  open
    if(open > 0)
    {
        out.push_back('(');
        solve(path,open - 1,close,out);
        out.pop_back();
    }

    // close
    if(close > open)
    {
        out.push_back(')');
        solve(path,open,close - 1,out);
        out.pop_back();
    }
}

int main()
{
    int n = 3;
    int open = n;
    int close = n;
    vector<string>ans;
    string out = "";
    solve(ans,open,close,out);
    display(ans);
    return 0;
}