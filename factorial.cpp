#include<iostream>
using namespace std;
int main()
{
	long double n,fact=1;
	cout<<"Please enter the value of n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	fact*=i;
	if(n==0)
	cout<<0<<endl;
	else
	cout<<fact<<endl;
	return 0;
}

