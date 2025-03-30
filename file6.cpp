// Typecasting in C++ => conversion of data from one data type to another data type
// 1. Implicit Typecasting
// 2. Explicit Typecasting
// 3. Dynamic Typecasting

// 1. Implicit Typecasting => done by the compiler automatically  bool -> char -> short -> int -> 
// unsigned int -> long -> unsigned long -> float -> double -> long double
// 2. Explicit Typecasting => done by the programmer using casting operator (type) value 
// 3. Dynamic Typecasting => done by the programmer

// Syntax:
#include<iostream>
using namespace std;

int main()
{
   int a = 10;
   float b = 3.0;
    float c = a + b; // Implicit Typecasting
    cout << "The value of c is: " << c << endl;
    cout << "The value of c is: " << (int)c << endl; // Explicit Typecasting

    return 0;
}