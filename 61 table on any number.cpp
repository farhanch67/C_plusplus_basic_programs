#include<iostream>
using namespace std;
int main()
{
	double a,b,r;
	cout<<"Enter the number to find the table =";
	cin>>a;
	cout<<"Enter the range of table =";
	cin>>b;
	for(int i=1;i<=b;i++)
	{
		r=a*i;
		cout<<a<<"*"<<i<<"="<<r<<endl;
	}
	return 0;
}
