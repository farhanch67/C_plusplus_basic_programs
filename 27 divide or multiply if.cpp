#include<iostream>
using namespace std;
int main()
{   
    float a,b,r;
    cout<<"Enter the first number =";
    cin>>a;
    cout<<"Enter the second number =";
    cin>>b;
    r=a+b;
    if(r<=100)
    {
    	r=a/b;
    	cout<<a<<"/"<<b<<"="<<r;
	}
	else
	{ 
	    r=a*b;
		cout<<a<<"*"<<b<<"="<<r;
	}
	return 0;
}
