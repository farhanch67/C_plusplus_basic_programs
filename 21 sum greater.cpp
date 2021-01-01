#include<iostream>
using namespace std;
int main()
{ 
    int a,b,c,r;
    cout<<"Enter the first number";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;
    cout<<"Enter the third number";
    cin>>c;
    r=a+b;
    if(r<c)
    {
    	cout<<"Sum is less than the third number ("<<c <<")="<<r;
	}
	else
	{
		cout<<"Sum is greater than the third number ("<<c<< ")="<<r;
	}
	return 0;
}
