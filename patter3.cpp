#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k;
    cout<<"Enter N:";
    cin>>n;

    for(int i=n;i>0;i--)
    {
        if (i == 0)
        {
            for(j = 0;j<n;j++)
            cout<<"* ";
        }
        else{
            int space = n - i;
            for(j = 0;j<space;j++)
            {
                cout<<"  ";
            }
            for(k = j;k < n;k++)
            {
                cout<<"* ";
            }
        cout<<endl;
        }
    }
    return 0;
}