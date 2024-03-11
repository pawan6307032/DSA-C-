#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &a, int data)
{

    if (a.empty())
    {
        a.push(data);
        return;
    }

    int temp = a.top();
    a.pop();
    insertAtBottom(a, data);
    a.push(temp);
}

void display(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

void solve(stack<int> &st)
{
    if (st.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "Before : ";
        display(st);
        int data = st.top();
        st.pop();
        insertAtBottom(st, data);
        cout << "After : ";
        display(st);
    }
}
int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    solve(st);
    return 0;
}