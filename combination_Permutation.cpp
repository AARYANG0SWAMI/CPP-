#include<iostream>
using namespace std;
//function for factorial
int fact(int n ){
	int f=1;
	for(int i=1;i<=n;i++)
		 f *=i;
	return f;
	}
//functin for combination
int comb(int n,int r){
	int ncr = fact(n)/(fact(r)*fact(n-r));
	return ncr;
	}
//function for permitation
int perm(int n,int r){
	int npr=fact(n)/fact(n-r);
	return npr;
}
int main(){
	int n,r;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<"Enter the value of r: ";
	cin>>r;
	cout<<"permutation is:  "<<perm(n,r)<<endl;
	cout<<"Combination is:  "<<comb(n,r)<<endl;
	return 0;
}
