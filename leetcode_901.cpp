#include <iostream>
#include <stack>
using namespace std;

stack<pair<int,int>> st;

int solve(int price)
{
    pair<int,int> p;
    p.first = price;
    p.second = 1;

    while(!st.empty() && st.top().first <= p.first)
    {
        p.second += st.top().second;
        st.pop();
    }

    st.push(p);

    return p.second;
}

int main()
{
    return 0;
}

