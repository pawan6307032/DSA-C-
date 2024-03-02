#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a{-7,-3,2,3,11};
    vector<int> b;

    for(auto value : a)
    {
        b.push_back(value * value);
    }   
    cout << endl;

    sort(b.begin(),b.end());

    for(auto value : b)
        cout << value << " ";
    
    return 0;
}