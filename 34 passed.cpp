#include<iostream>
using namespace std;
int main()
{
	int a,b,r;
	cout<<"Enter the marks of first subject =";
	cin>>a;
	cout<<"Enter the marks of second subject =";
	cin>>b;
	if(a>40 || b>40)
	{
		cout<<"Student is passed";
	}
	else
	{
		cout<<"Student is failed";
	}
	return 0;
}
