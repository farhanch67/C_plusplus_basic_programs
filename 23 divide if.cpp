#include<iostream>
using namespace std;
int main()
{
	float a,b,r;
	cout<<"Enter the first number =";
	cin>>a;
	cout<<"Enter the second number =";
	cin>>b;
	if(b!=0)
	{
		r=a/b;
		cout<<a<<"/"<<b<<"="<<r;
	}
	else
	{
		cout<<"second number is zero";
	}
	return 0;
	
}
