#include<iostream>
using namespace std;
int main()
{   int a,b,r;
    cout<<"Enter the first number =";
    cin>>a;
    cout<<"Enter the second number =";
    cin>>b;
    r=a*b;
    if(r<0)
    {
    	cout<<a<<"*"<<b<<"="<<r<<"  product is negative";
	}
	else
	{
		cout<<"Product is ="<<r;
	}
	return 0;
}
