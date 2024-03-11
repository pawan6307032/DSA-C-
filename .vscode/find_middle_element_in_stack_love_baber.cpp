#include <iostream>
#include <stack>
using namespace std;

void findMiddle(stack<int>&a,int size)
{
    if(a.size() == 0)
    {
        cout << "Stack is empty" << endl;
        return;
    }

    if(a.size() == size)
    {
        cout << a.top() << endl;
        return;
    }

    int temp = a.top();
    a.pop();
    findMiddle(a,size);
    a.push(temp);
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

    int size = st.size() / 2 + 1;
    findMiddle(st,size);
    return 0;
}