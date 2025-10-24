#include<iostream>
//assigment operators are used to assign the RHS value to LHS
using namespace std;
int main()
{
  int a = 10;    //assign value of 10 to a
  a+=10;
  cout<<"sum of a and 10 is " <<a <<endl; //a=a+10  = 20
  a-=10;
  cout<<a<<endl;   // a=a-10    = 20-10=10
  a*=20;
  cout<<a<<endl;    // 10*20= 200
  a/=5;
  cout<<a<<endl;   //200/5 =40
  return 0;
}