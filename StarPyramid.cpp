#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"Please enter the value of n : ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
		cout<<"  ";
		for(k=1;k<=(2*i-1);k+=1)
		cout<<"* ";
	cout<<endl;
	}
}
