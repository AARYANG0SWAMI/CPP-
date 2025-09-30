#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Please enter the value of n : ";
	cin>>n;
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
		if(i==j ||  ((i-j)%2==0))
		cout<<1;
		else
		cout<<0;
		}
	cout<<endl;
	}
}
