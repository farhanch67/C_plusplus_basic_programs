#include<iostream>
using namespace std;
int main()
{
	float a,b,c,r;
	cout<<"Enter the first number =";
	cin>>a;
	cout<<"Enter the second number =";
	cin>>b;
	cout<<"Enter the third  number =";
	cin>>c;
	r=a+b+c/3;
	if(r<0)
	{
		cout<<"Average of three numbers is negative ="<<r;
	}
	else
	{
		cout<<"Average of three numbers is ="<<r;
	}
	return 0;
}
