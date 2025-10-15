#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"Enter the value of n:  ";
	cin>>n;
	for(i=0;i<=n;i++){
		int curr = 1;
		for(j=0;j<=i;j++){
		cout<<curr<<" ";
		curr = curr*(i-j)/(j+1);
		}
	cout<<endl;
	}
}
