#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        for(auto i : s)
        {
            if(a.empty())
                a.push(i);
            else if((a.top() == '(' && i == ')') ||
                    (a.top() == '[' && i == ']') ||
                    (a.top() == '{' && i == '}'))
                a.pop();
            else
                a.push(i);
        }

        return (a.size() == 0) ?true : false;
    }
};