#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a=1;
	cout<<"Please enter the value of n: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
		cout<<a<<" ";
		a+=1;
		}
	cout<<endl;
	}
}
		
