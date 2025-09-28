#include<iostream>
using namespace std;
int main()
{
	int m,n,ld,count=0;
	cout<<"Please enter the value of n: ";
	cin>>n;
	m=n;
	while(m>0)
	{
	ld=m%10;
	count=count+ld;
	m=m/10;
	}
	cout<<"The sum of digits of numbers is: "<<count<<endl;
	return 0;
}
