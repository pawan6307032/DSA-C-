#include <iostream>
#include <stack>
using namespace std;

void display(stack<int> a)
{
    while(!a.empty())
    {
        cout << a.top() << " ";
        a.pop();
    }
    cout << endl;
}

void insertAtBottom(stack<int> &a,int data)
{
    if(a.empty()){
        a.push(data);
        return;
    }

    int temp = a.top();
    a.pop();
    insertAtBottom(a,temp);
    a.push(temp);
}

void reverse(stack<int>&a)
{
    if(a.empty())   return;

    int data = a.top();
    a.pop();

    reverse(a);

    insertAtBottom(a,data);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << "Before : " ;
    display(st);

    reverse(st);

    cout << "\nAfter  : ";
    display(st);
    return 0;
}