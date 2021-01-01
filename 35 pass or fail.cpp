#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the marks of first subject =";
	cin>>a;
	cout<<"Enter the marks of second subject =";
	cin>>b;
	cout<<"Enter the gpa of the student =";
	cin>>c;
	if(a>40 && b>40 && c>2)
	{
		cout<<"Student is passed";
	}
	else
	{
		cout<<"Student is failed";
	}
	return 0;
	
}
