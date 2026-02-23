#include<iostream>
using namespace std;
int sLargest(int arr[],int n){
		smax=arr[0];
		for(int i=0;i<n;i++){
		
	
int main(){
	int arr[],n;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<"Enter the array elements: \n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int smax=sLargest(arr,n);
	cout<<"Value of second largest element is "<<smax<<endl;
	return 0;
}
