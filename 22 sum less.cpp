#include<iostream>
using namespace std;
int main()
{
	int a,b,r;
	cout<<"Enter the first number =";
	cin>>a;
	cout<<"Enter the second number";
	cin>>b;
	r=a+b;
	if(r<50)
	{
		cout<<"Sum is less than 50 ="<<r;
	}
	else
	{
		cout<<"sum is ="<<r;
	}
	return 0;
}
