#include<iostream>
using namespace std;
int main()
{   
    int a,b,c,d;
    
    cout<<"Enter the first number =";
	cin>>a;
	cout<<"Enter the second number =";
	cin>>b;
	cout<<"Enter the third number =";
	cin>>c;
	cout<<"Enter the fourth number =";
	cin>>d;
	if(a>b && a>c && a>d)
	{
		cout<<a<<"  is greater ";
	}
	if(b>a && b>c && b>d)
	{
		cout<<b<<"  is greater";
	}
	if(c>a && c>>b && c>d)
	{
		cout<<c<<"   is greater";
	}
	if(d>a && d>b && d>c)
	{
		cout<<d<< "  is greater";
	}
	else
	{
		cout<<"Some values are equal";
	}
	return 0;
}
