#include<iostream>
using namespace std;
//design a calculator using switch statements
int main()
{
    float a,b;
    int n;
    cout<<"Please enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"Enter 1 for addition"<<endl;
    cout<<"Enter 2 for subtraction"<<endl;
    cout<<"Enter 3 for multiplication"<<endl;
    cout<<"Enter 4 for division"<<endl;
    cin>>n;
    switch(n)
    {
        case 1: cout<<"sum of a and b is"<<(a+b);
        break;
        case 2: cout<<"subtraction of a and b is "<<(a-b);
        break;
        case 3: cout<<"Multioplication of a and b is "<<(a*b);
        break;
        case 4: cout<<"division of a and b is "<<(a/b);
        break;

        return 0;
    }



    return 0;
}