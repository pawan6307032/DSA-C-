#include <iostream>
#include <vector>
using namespace std;

int display(vector<int>a)
{
    for (auto value : a)
        cout << value << " ";

    return 0;
}

int left(vector<int>a,int d)
{
    for (int i = 0; i < d; i++)
    {
        int temp = a[0];
        for (int j = 0; j < (a.size() - 1); j++)
        {
            a[j] = a[j + 1];
        }
        a[a.size() - 1] = temp;
    }
    display(a);
    return 0;
}

int right(vector<int>a,int d)
{
    for (int i = 0; i < d; i++)
    {
        int temp = a[a.size() - 1];
        for(int j = a.size() - 1;j>0;j--)
        {
            a[j] = a[j-1];
        }
        a[0] = temp;
    }
    display(a);
    return 0;
}

int main()
{
    vector<int> a{1, 2, 3, 4, 5};
    int d;
    cout<<"Enter D :";
    cin >> d;


    cout<<"Left Rotate :";
    left(a,d);
    
    cout<<endl;

    cout<<"Right Rotate :";
    right(a,d);    

    return 0;
}