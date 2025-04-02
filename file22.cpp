#include<iostream>
using namespace std;
//count sum of odd numbers in digit
int main()
{
    int n,d,s=0,m;
    cout<<"Enter the number"<<endl;
    cin>>n;
    m=n;
    while(m>0)
    {
        d=m%10;
        if(d%2!=0)
        {
            s=s+d;
        }
        m=m/10;
    }
    cout <<"sum of odd digits are "<<s<<endl;
    return 0;
}