#include<iostream>
using namespace std;
int main()
{
	double a,r;
	cout<<"Enter the length to find the sum of even numbers =";
	cin>>a;
	for(int i;i<=a;i+=2)
	{
		r=r+i;
	}
	cout<<"sum is ="<<r;
	return 0;
}
