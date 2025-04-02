#include<iostream>
using namespace std;
//to print sum of first N natural numbers
int main()
{
    int i=1,n,sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout <<"sum is "<< sum<<endl;
    return 0;
}