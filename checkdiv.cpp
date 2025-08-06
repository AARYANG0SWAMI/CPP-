#include<iostream>
using namespace std;
int main()
{
	//To check if number is divisible by 3 or 5 but not by 15.
	int n;
	cout<<"Enter the number :";
	cin>>n;
	if((n%3==0)!=(n%5==0))
	{
	if(n%3==0)
	{cout<<"Divisible by 3 but not by 15"<<endl;}
	if(n%5==0)
	{cout<<"Divisible by 5 but not by 15"<<endl;}
	}
	else cout<<"Not Divisible"<<endl;
} 
