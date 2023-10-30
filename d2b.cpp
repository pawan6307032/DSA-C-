#include<iostream>
#include<cmath>

using namespace std;

int d2b(int n)
{
  int binary = 0;
  int i = 0;
   while(n>0)
     {
       int bit = n%2;
       
       binary += bit * pow(10,i++);
       n = n/2;
     }
  return binary;
}



int main()
{
  int n = 10,k = 2;

  int res = d2b(4);
  cout<<res;
  
  
  return 0;
}
