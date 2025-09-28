#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"Please enter the value of n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	if(i%2==0)
	count=count-i;
	else
	count=count+i;
	}
	cout<<"The sum of series is: "<<count<<endl;
}
