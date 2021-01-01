#include<iostream>
using namespace std;
int main()
{
	int a,b,r;
	cout<<"Enter the first number =";
	cin>>a;
	cout<<"Enter the second number =";
	cin>>b;
	if(a==0 || b==0)
	{
		r=a+b;
		cout<<a<<"+"<<b<<"="<<r;
	}
	else
	{
		cout<<"no no is zero";
	}
	return 0;
	
}
