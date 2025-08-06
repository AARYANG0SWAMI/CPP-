#include<iostream>
using namespace std;
int main()
{
	float cp , sp;
	cout<<"Please enter the Cost Price : ";
	cin>>cp;
	cout<<"Please enter the Selling Price : ";
	cin>>sp;
    	if(cp>sp)
	{
	cout<<"You have made a loss of "<<cp-sp<<" . "<<endl;
	}
	if(sp>cp)
	{
	cout<<"You have made a profit of "<<sp-cp<<" . "<<endl;
	}
	if(cp==sp)
	{
	cout<<"You have made nither loss nor profit. "<<endl;
	}
	return 0;
}
