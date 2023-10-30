#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;

    int k = 0;

    for(int i = 1;i<=n;i++)
    {
        int space1 = n - i;
        for(int j = 0;j<space1;j++)
        {
            cout<<"  ";
        }

        int star = i + (k++);
        for(int j = 0;j<star;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}