#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
  string s = "azxxzy";

  stack<char>st;
  int i = s.size();
  while(i >= 0)
  {
    if(st.empty())
      st.push(s[i]);
    else if(st.top() == s[i])
      st.pop();
    else
      st.push(s[i]);
    i--;
  }

    string s1 = "";
  while(!st.empty())
  {
    s1 = st.top() + s1;
    st.pop();
  }
  
  reverse(s1.begin(),s1.end());
  cout << s1;
  return 0;
}