

#include<iostream>
using namespace std;
int lsearch(int arr[],int n,int item){
	for(int i=0;i<n;i++){
		if(arr[i]==item)
		return i;
	}
	return -1;
}
int main(){
	int arr[10],n,item;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<"Enter the array elements:\n ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the element to search ";
	cin>>item;
	int x= lsearch(arr,n,item);
	if(x!=-1)
	cout<<"Item found at index "<<x<<endl;
	else
	cout<<"Item not found.\n";
	return 0;

}
