#include<iostream>
using namespace std;
int max_arr(int arr[],int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(arr[i]>=max)
		max=arr[i];
	}
	return max;
}
int main(){
	int arr[10],n;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<"Enter the array elements: \n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max = max_arr(arr,n);
	cout<<"maximum value of element in array is "<<max<<endl;
	return 0;
}
