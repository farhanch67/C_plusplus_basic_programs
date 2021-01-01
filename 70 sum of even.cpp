#include<iostream>
using namespace std;
int main()
{
	int a,b,r,d=0,c=2;
	cout<<"Enter the starting number of range =";
	cin>>a;
	cout<<"Enter the Ending number of range =";
	cin>>b;
	for(int i=a+1;i<b;i++)
	{
		r=i%c;
	if(r==0)
	{
		d=d+i;
	}
	}
	cout<<"Sum is ="<<d;
	return 0;
}
