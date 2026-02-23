#include<iostream>
using namespace std;
void display(int arr[] ,int n){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"\n";
}
int main(){
	int arr[20],n;
	cout<<"Enter the value of n: \n";
	cin>>n;
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Entered elements are";
	display(arr,n);
	return 0;
}
