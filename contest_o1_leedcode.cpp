#include <iostream>
#include <vector>
using namespace std;

//display
void display(vector<int> a)
{
    for(auto value : a)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> a{5,4,3,8};
    vector<int> b,c;
    b.push_back(a[0]);
    c.push_back(a[1]);

    for(int i = 2;i<a.size();i++)
    {
        if(b[i - 1] >= c[i - 1])
            b.push_back(a[i]);
        else    
        c.push_back(a[i]);
    }

    // for(int i = 0;i<c.size();i++)
    //     b.push_back(c[i]);
    cout << endl;
    display(b);
    display(c);

    b.push_back(c[1]);
    display(b);
    return 0;
}