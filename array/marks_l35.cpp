// print the indices whose values are less than 35 as roll number of student
#include<iostream>
using namespace std;
int main(){
	int n;  
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements: "<<endl;
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		if(arr[i]<35) cout<<i<<endl;
	}
	return 0;
}
