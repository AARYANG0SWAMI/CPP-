#include<iostream>
using namespace std;
int main()
{
	int n,i,j,nst,nsp;
	cout<<"Please enter the number of spaces : ";
	cin>>n;
	nst=1;
	nsp=n-1;
	for(i=1;i<=1;i++){
		for(j=1;j<=nsp;j++){
		cout<<" ";
		nsp--;
		}
		for(j=1;j<=nst;j++){
		cout<<"*";
		nst+=2;
		}
	cout<<endl;
	}
}

