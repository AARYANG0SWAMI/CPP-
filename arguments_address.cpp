#include<iostream>
using namespace std;
void fun(int x,int y) //here x and y are formal parameters as they are used to recieve the orignal value.
{
	cout<<"Address of void x: "<<&x<<endl;
	cout<<"Address of void y: "<<&y<<endl;
} 
int main(){
	int x;
	int y;
	cout<<"Address of main x: "<<&x<<endl;
	cout<<"Address fo main y: "<<&y<<endl;
	fun(x,y); //here x and y are actual parameters as they are pass the orignal values.
}
