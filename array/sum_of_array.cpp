#include<iostream>
using namespace std;
int main(){
	int arr[7],n,sum=0;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<"Ente array elements: \n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	cout<<"sum of array elements is:"<<" "<<sum<<endl;
	return 0;
}
