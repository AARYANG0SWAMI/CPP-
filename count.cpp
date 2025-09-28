#include<iostream>
using namespace std;
int main()
{
	int n,m,count=0;
	cout<<"Please enter the value of n:";
	cin>>n;
	m=n;
	while(m>0)
	{
	m=m/10;
	count++;
	}
	if(n==0) 
	cout<<"Count of digit is: " <<1<<endl;
	else 
	cout<<"Count of digit is: " <<count<<endl;
}
	
