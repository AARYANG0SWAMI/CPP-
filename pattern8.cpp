#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"please enter the value of n: ";
	cin>>n;
	for(i=0;i<n;i++){
		int A=65;
		for(j=0;j<n;j++){
			cout<<char(A)<<" ";
			A+=1;
		}
	cout<<endl;
	}
	return 0;
}
