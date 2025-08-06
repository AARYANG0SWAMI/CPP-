#include<iostream>
using namespace std;
int main()
{
	//program to check if given character is a alphabet or not
	char ch;
	cout<<"Enter a Charactor :";
	cin>>ch;
	ch = (int)ch;
	if((ch>=65&&ch<=91)||(ch>=97&&ch<=122))
	{
	cout<<"Entered character is a Alphabet. ";
	}
	else
	{
	cout<<"Not a alphabet ";
	}
	return 0;
}
