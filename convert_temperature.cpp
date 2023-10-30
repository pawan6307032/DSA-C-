#include<iostream>
using namespace std;

int main()
{
    float n,temp[2];
    cout<<"Enter Celsius:";
    cin>>n;
    
    float k = n + 273.15;
    float f = (n * 1.80) + 32;


    temp[0] = k;
    temp[1] = f;

    cout<<"Output : "<<"[";

    for(int i = 0;i<2;i++)
    cout<<temp[i]<<",";

    cout<<"]"<<endl;

    cout<<"Celsius to kelvin : "<<k<<endl;
    cout<<"Celsius to fahrenhit : "<<f<<endl;
    

    return 0;
}