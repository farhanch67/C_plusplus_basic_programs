#include<iostream>
using namespace std;
int main()
{
	double a,b,c,r;
	cout<<"Enter the first number =";
	cin>>a;
	cout<<"Enter the second number =";
	cin>>b;
	cout<<"Enter the operation number "<<endl;
	cout<<"1=(Addition)\n2=(subtraction)\n3=(multiplication)\n4=(division)\n=";
	cin>>c;
	if(c==1)
	{
		r=a+b;
		cout<<a<<"+"<<b<<"="<<r;
	}
	if(c==2)
	{
		r=a-b;
		cout<<a<<"-"<<b<<"="<<r;
	}if(c==3)
	{
		r=a*b;
		cout<<a<<"*"<<b<<"="<<r;
	}if(c==4)
	{
		r=a/b;
		cout<<a<<"/"<<b<<"="<<r;
	}
	return 0;
}
