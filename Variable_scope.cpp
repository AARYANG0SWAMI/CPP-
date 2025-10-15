#include<iostream>
using namespace std;
int g=4;
void fun(){
g+=20;
//	cout<<x;       	//here x is local variable of main and limits to main function only.
//	cout<<g; 	//here g is a global variable of the code which will execute all over the code.
}
int main(){
	int x=4;
	cout<<x;     //here y is the local variable of main function which will run in this function.
//	fun();
	cout<<g;
}
