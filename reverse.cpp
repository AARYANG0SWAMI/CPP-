
#include<iostream>
using namespace std;
int main()
{
	int m,n,ld, r=0;
	cout<<"Please enter the value of n:";
	cin>>n;
	m=n;
	while(m>0)
	{
	ld=m%10;
	r=r*10;
	r=r+ld;
	m=m/10;
	}
	cout<<"Reversed number is : "<<r<<endl;
	return 0;
}

