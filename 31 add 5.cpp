#include<iostream>
using namespace std;
int main()
{
	int a,b,r;
	cout<<"Enter the first number =";
	cin>>a;
	cout<<"Enter the second number =";
	cin>>b;
	if(b==0)
	{
		r=a+5;
		cout<<"result is ="<<r;
	}
	else
	{
		r=a+b;
		cout<<a<<"+"<<b<<"="<<r;
	}
	return 0;
}
