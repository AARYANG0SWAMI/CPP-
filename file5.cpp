#include<iostream>
//syntex
#define PI 3.14159
#define ll long long
// #define PI 3.14159
using namespace std;
// Macroso in CPP>> Macros is preprocessor directive is has a fixed globle value in entire code.
int main()
{
    ll x=1000000000000000000;  // ll is a macro which is defined as long long
    // PI=3.14; // It will give error because we can't change the value of PI because it is a macro.
    cout<<PI<<endl;
    
    cout<<x;
    
    return 0;
}