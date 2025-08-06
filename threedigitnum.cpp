#include<iostream>
using namespace std;
int main()
{
	//To check if enter number is  a three digit number
	int n;
	cout<<"Please enter the number : ";
	cin>>n;
	if((n>100)&&(n<999))
	{
	cout<<"Entered number is a three digit number ";
	}
	else
	{
	cout<<"Entered number is not a three digit number : ";
	}
	return 0;
}
