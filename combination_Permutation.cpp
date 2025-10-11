#include<iostream>
using namespace std;

	int fact(int n ){
	int f=1;
	for(int i=1;i<=n;i++)
		 f *=i;
	return f;
}
	

int main(){
	int n,r;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<"Enter the value of r: ";
	cin>>r;
	int xfact=fact(n-r);
	int nfact=fact(n);
	int rfact=fact(r);
	cout<<"permutation is "<<nfact/(rfact*xfact)<<endl;
	cout<<"Combination is "<<nfact/rfact;
}
