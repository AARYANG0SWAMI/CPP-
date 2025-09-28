#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Please enter the value of n : ";
	cin>>n;
	bool flag =true;
	for(int i =2;i<n;i++)
	{
	if(n%i==0)
	break;
	flag = false;
	}
	if(n==1)
	cout<<"Entered number is not a  prime number nor composite";
	else if(flag==true)
	cout<<"Entered number is prime number :";
	else cout<<
"Entered number is a composite number:";
}
