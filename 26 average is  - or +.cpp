#include<iostream>
using namespace std;
int main()
{  
    int a,b,r;
    cout<<"Enter the first number =";
    cin>>a;
    cout<<"Enter the second number =";
    cin>>b;
    r=a+b/2;
    if(r<0)
    {
    	cout<<"Average of given numbers is negative ="<<r;
	}
	else
	{
		cout<<"average is positive ="<<r;
	}
    
	return 0;
}
