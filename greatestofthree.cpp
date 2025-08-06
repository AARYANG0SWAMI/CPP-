#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the number a :";
	cin>>a;
	cout<<"Enter the number b : ";
	cin>>b;
	cout<<"Enter the number c : ";
	cin>>c;
	if(a>b && a>c)
	{
	cout<<"A is the greatest number\n";
	}
	if(b>a && b>c)
	{
	cout<<"B is the greatest number\n";
	}
	if(c>a && c>b)
	{
	cout<<"C is greatest number";
	}
	return 0;
}
