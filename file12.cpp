#include<iostream>
using namespace std;
//else if statement ==> it is used for more than one statement
int main()
{
    int age;
    cout<<"please ente your age";
    cin>>age;
    if(age>=18&&age<35)
    {
        cout<<"You can vote";
    }
    else if(age>=35)
    { 
        cout<<"You can vote or also elegible for the contest";
    }
    else 
    cout <<"You can't vote ";
    return 0;
}