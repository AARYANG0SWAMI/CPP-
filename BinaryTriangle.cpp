#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a;
	cout<<"Enter the value of n : ";
	cin>>n;
	for(i=1;i<=n;i++){
		a=1;
		if(i%2==0)
		a=0;
		else
		a=1;
		for(j=1;j<=i;j++){
		cout<<a;
		if(a==1)
		a=0;
		else
		a=1;
		}
	cout<<endl;
	}
}
