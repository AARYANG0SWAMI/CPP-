#include<iostream>
using namespace std;
int main()
{
	int n,a=-1,b=1,i,count=0;
	cout<<"Please enter the value of n: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
	count=a+b;
	a=b;
	b=count;
	cout<<count<<" ";
	}
}
