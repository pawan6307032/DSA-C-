#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter N:";
    cin>> n;

    for(int i=0;i<n-1;i++)
    {
        if(i == 0)
        {
            for(int j = 0;j<n;j++)
            cout<<"* ";
        }
        else if (i > 0 || i<4)
        {
            int space = n - 2 - i;
            cout<<"* ";
            for(int j = 0;j<space;j++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"* ";
    return 0;
}