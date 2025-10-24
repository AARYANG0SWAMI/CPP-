#include <iostream>
using namespace std;

//Logical operators are used to give value in true or false
int main()
{
    int a=10  , b=50, c=40, d=0;
    cout<<(!(a<=b)&&(b>=c))<<endl;  //both conditions must be true
    cout<<((a<=b)||(c>=b))<<endl;    //at least one condition must be true
    cout<<(!a) <<(!b) <<(!d) <<endl;   // for nonzero =0 for zero =1 
    return 0;
}