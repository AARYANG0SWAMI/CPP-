#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Number: ";
	cin>>n;
	int count;
	for( int i=2;i<n;i++)
	{
	if(n%i==0)
	count++;
	}
	if(count>=1)
	cout<<"Not a prime number";
	else
	cout<<"prime number";
}
