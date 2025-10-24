/* Data Types are of two types 
1 => Premitive  >>> integer,character, Boolean, Floating point, Double float
2 => Non-Primitive       string Arrays
*/
#include<iostream>
//primitive Data Types
using namespace std;
int main()
{
    int a =4;   
    char grade ='A';
    bool isAdult= true; // gives value in true and false
    float PI= 3.14;
    double PII=3.1457;
    cout<<sizeof(a);     //4 bytes
    cout<<sizeof(grade); //1 bytes
    cout<<sizeof(isAdult);  //1 
    cout<<sizeof(PI);  //4 bytes
    cout<<sizeof(PII);  // 8 bytes
    return 0;

}
