#include<iostream>
using namespace std;
//calculate sum of digits using while loop
int main()
{
   long long int n,d,s=0,m;
   cout<<"Enter the number"<<endl;
   cin>>n;
   m=n;
   while(m>0)
   {
    d=m%10;
    s=s+d;
    m=m/10;
   }
   cout<<"sum is = "<<s<<endl;
    return 0;
}
