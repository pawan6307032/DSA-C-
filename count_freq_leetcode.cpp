#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int>a)
{
    for(auto i : a)
        cout << i << " ";
    cout << endl;
}

void findFrequency(vector<int>a)
{
    sort(a.begin(),a.end());
    int count = 0;
    int i;
    for(i  = 0;i < a.size();i++)
    {
        if(a[i] == a[i + 1])
            count += 2;
    }
    cout << endl << count << endl;
    display(a);
}

int main()
{
    vector<int> a{1,2,3,4,5};
    findFrequency(a);
    return 0;
}