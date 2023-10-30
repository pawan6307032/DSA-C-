#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter N:";
    cin>>n;

    for(i=0;i<n-1;i++)
    {
        if (i==0)
        {
            for(int j = 0;j<n;j++)
            {
                cout<<"* ";
            }
        }
        else {
            for(int j = 0;j<i;j++)
            {
                cout<<"  ";
            }
            int space = n -2 - i;
            cout<<"* ";
            for(int k = 0;k<space;k++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int j = 0;j< i;j++)
    {
        cout<<"  ";
    }
    cout<<"* ";
    
    
}