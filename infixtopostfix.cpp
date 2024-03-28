#include <iostream>
#include <stack>
using namespace std;

int check(char i)
{
    if(i == '^')
        return 3;
    else if(i == '*' || i == '/')
        return 2;
    else if(i == '+' || i == '-')
        return 1;
    else
        return -1;
}

char associativity(char i)
{
    if(i == '^')
        return 'R';
    else
        return 'L';
}

string solve(string s)
{
    stack<char> st;
    string ans;

    for(auto i: s)
    {
        if((i >='a' && i <= 'z') || (i >= 'A' && i <= 'Z') || (i >= '0' && i <= '9'))
            ans += i;

        else if(i == '(')
            st.push(i);
        
        else if(i == ')')
        {
            while(st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop(); 
        }

        else{
            while( (!st.empty() && check(i) < check(st.top())) || (!st.empty() && check(i) == check(st.top()) && associativity('L')))
            {
                ans += st.top();
                st.pop();
            }
            st.push(i);
        }
    }

    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main()
{
    string s = "a+b*c";     // abc*+
    string ans = solve(s);

    cout << ans;
    return 0;
}