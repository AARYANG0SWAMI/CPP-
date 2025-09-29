#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter the odd value of n : ";
	cin>>n;
	if(n%2==0)
	cout<<"Please enter the correct odd value. ";
	else{
	int mid = n/2 +1;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
 		if(i==mid || j==mid)
		cout<<"* ";
		else
		cout<<" ";
		}
		cout<<endl;
	}}
	return 0;
}
