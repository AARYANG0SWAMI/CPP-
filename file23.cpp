#include<iostream>
using namespace std;
//reverse a number using loops
int main()
{
    int n,d,r=0,m;
    cout<<"Enter the number"<<endl;
    cin>>n;
    m=n;
    while(m>0)
    {
        d=m%10;
        r=r*10+d;
        m=m/10;
    }
    cout<<"Reverse of the number is "<< r<<endl;
    return 0;
}