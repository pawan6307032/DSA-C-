#include <iostream>
#include <stack>
using namespace std;

void insertSort(stack <int> &st,int target)
{
  if(st.empty())
  {
    st.push(target);
    return;
  }
    
  if(target >= st.top())
  {
    st.push(target);
    return;
  }

  int temp = st.top();
  st.pop();
  insertSort(st,target);
  st.push(temp);
}

void sortStack(stack <int> &st)
{
  if(st.empty())
    return;
  
  int temp = st.top();
  st.pop();
  sortStack(st);
  insertSort(st,temp);
}

void display(stack <int> st)
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

  st.push(2);
  st.push(4);
  st.push(3);
  st.push(6);
  st.push(8);
  st.push(5);
  st.push(7);
  
  int target = 5;
  cout << "Before :";
  display(st);

  sortStack(st);

  cout << "After :";
  display(st);
  return 0;
}