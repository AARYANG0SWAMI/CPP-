#include<iostream>
using namespace std;
//function for factorial
int fact(int n){
	int f=1;
	for(int i=1;i<=n;i++)
	f *= i;
	return f ;
}
int comb(int n,int r){
	int ncr=fact(n)/(fact(r)*fact(n-r));
	return ncr ;
}
int main(){
	int i,j,k,n;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(i=0;i<=n-1;i++){
		for(j=0;j<=i;j++)
		cout<<comb(i,j)<<" ";
		for(
	cout<<endl;
	}
}
