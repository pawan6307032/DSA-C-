#include <iostream>
#include <stack>
#include <limits.h>
using namespace std;

void check(stack<int> &st,int &mini)
{
    if(st.empty())
    {
        st.push(-1);
        return;
    }

    int temp = st.top();
    st.pop();
    check(st,mini);
    mini = min(st.top(),temp);
    st.push(temp);
}

void display(stack<int>st)
{
  cout << endl;
  while(!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
}

int main()
{
  stack<int> st;

  st.push(3);
  st.push(4);
  st.push(1);
  st.push(2);

  display(st);
  int mini = INT_MAX;
  check(st,mini);
  cout << mini;
  return 0;
}