#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> a)
{
    for(auto i : a)
        cout << i << " ";
}

int main()
{
    vector<int> v = {0,1,0,1};

    for(int i = 0; i < v.size();i++)
    {
        if(v[i] == 0)
            v[i] = -1;
    }

    display(v);
}