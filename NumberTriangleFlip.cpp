#include<iostream>
using namespace std;
int main()
{
        int n,i,j;
        cout<<"Please enter the value of n : ";
        cin>>n;
        for(i=1;i<=n;i++){
                for(j=n;j>=1;j--){
                if(i>j)
                cout<<j<<" ";
                else
                cout<<"  ";
                }
        cout<<endl;
        }
}





