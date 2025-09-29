#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Please enter the value of n: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j || i==n-j+1)
			cout<<"* ";
			else
			cout<<"  ";
		}
	cout<<endl;
	}
		
}
