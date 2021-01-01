#include<iostream>
using namespace std;
int main()
{ 
    int a,b,r;
    cout<<"Enter the first number =";
    cin>>a;
    cout<<"Enter the second number =";
    cin>>b;
    r=a-b;
    if(r<0)
    {
    	cout<<"Difference is less than 0 ="<<r;
	}
	else
	{
		r=a*b;
		cout<<a<<"*"<<b<<"="<<r;
	}
	return 0;
}
