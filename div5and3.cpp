#include<iostream>
using namespace std;
int main()
{
	//Code to check is number is divisible by 3 or not
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	if(n%5==0 && n%3==0)
	{
	cout<<"Entered number is divisible by 5 and 3 .";
	}
	else
	{
	cout<<" Not divisible by 5 and 3 simultaniously."<<endl;
	}
	return 0;
}
