#include<iostream>
using namespace std;
void fun(int x=4,float y=8,bool z = true)	//default valude will be given to all if it given to only one it will give errot=r
			       // it can be any different data types values .
{
	cout<<x<<" "<<y<<" "<<z<<endl;
}
int main(){
	fun(4,6.4);	//4 and 6 are default value and function cant overwrite it 
	fun(5); 	// 5 is assingn to int x and udate 5 to four.
	fun();		//if nothing is given to actual arguments then formal valudes take place.
	fun(7.34);	//here 7.34 will not pass to float y it will pass to int x with a warning and value of 7.
	fun(false);	//it will not assing to z and will change the value of x to 0. as false represent the 0.
}
