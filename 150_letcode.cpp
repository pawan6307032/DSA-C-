#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
using namespace std;

int solve(vector<string> s)
{
    stack<int> st;

    for(auto i : s)
    {
        if(i == "*" || i == "/" || i == "+" || i == "-" || i == "^")
        {
            int op2 = st.top();     st.pop();
            int op1 = st.top();     st.pop();
            
            int ans;
            if(i == "+")
                ans = op1 + op2;
            else if(i == "-")
                ans = op1 - op2;
            else if(i == "*")
                ans = op1 * op2;
            else if(i == "/")
                ans = op1 /op2;
            else    
                ans = op1 ^ op2;
            
            st.push(ans);
        }
        else{
            stringstream ss(i);
            int num;
            ss >> num;

            st.push(num);
        }
    }

    return st.top();
}

int main()
{
    vector<string> s{"2","1","+","3","*"};
    int ans = solve(s);
    cout << ans;

    return 0;
}