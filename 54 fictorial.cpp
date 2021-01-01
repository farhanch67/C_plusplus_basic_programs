#include<iostream>
using namespace std;
int main()
{
	double a,r=1;
	cout<<"Enter the number to find fictorial=";
	cin>>a;
	for(int i=1;i<=a;i++)
	{
	 r=r*i;
	}
	cout<<"Fictorial of "<<a<<"="<<r;
	return 0;
}
