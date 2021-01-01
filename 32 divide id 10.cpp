#include<iostream>
using namespace std;
int main()
{
	int a,b,r;
	cout<<"Enter the first number =";
	cin>>a;
	cout<<"Enter the second number =";
	cin>>b;
	if(b>0 && b<=10)
	{
		r=a/b;
		cout<<a<<"/"<<b<<"="<<r;	
	}
	else
	{
		cout<<"greater than 10 ="<<b;
	}
	return 0;
	
}
