#include<iostream>
using namespace std;
int main()
{
	int a,b,res;
	cout<<"Enter the first number =";
	cin>>a;
	cout<<"Enter the second number =";
	cin>>b;
	if(b>0)
	{
		res=a/b;
		cout<<a<<"/"<<b<<"="<<res;
	}
	if(b<0)
	{
		res=a*b;
		cout<<a<<"*"<<b<<"="<<res;
	}
	if(b==0)
	{
		res=a+b;
		cout<<a<<"+"<<b<<"="<<res;
	}
	return 0;
}
