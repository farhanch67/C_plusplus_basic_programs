#include<iostream>
using namespace std;
int main()
{
	int a,r;
	cout<<"Enter the number to find the table =";
	cin>>a;
	if(a!=0)
	{
		for(int i=1;i<=10;i++)
		{
			r=a*i;
			cout<<a<<"*"<<i<<"="<<r<<endl;
		}
	}
	else
	{
		cout<<"Input number is zero ";
	}
	return 0;
}
