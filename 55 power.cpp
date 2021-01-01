#include<iostream>
using namespace std;
int main()
{
	double a,b,r=1;
	cout<<"Enter the number =";
	cin>>a;
	cout<<"Enter the power =";
	cin>>b;
	for(int i=1;i<=b;i++)
	{
		r=r*a;
	}
	cout<<"result is ="<<r;
	return 0;
}
