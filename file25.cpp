#include<iostream>
using namespace std;
//exit from loop when the value becomes multiple of ten
int main()
{
    int i;
    cout <<"Enter the value :"
    cin>>i;
    for (i;i=true;)
    {
        if(i%10==0)
        {
            break;
        }
        cout<<"You entered "<<i<<endl;
    }
    return 0;
}