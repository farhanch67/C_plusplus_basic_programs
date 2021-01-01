#include<iostream>
using namespace std;
int main()
{
	int a,b,r;
	cout<<"Enter the Range of integers =";
	cin>>a;
	cout<<"Enter the number whose divisble are find =";
	cin>>b;
	cout<<"Divisible of ="<<b<<endl;
	
	if(b!=0)
	{
	cout<<"Divisible of "<<b;
	for(int i=1;i<=a;i++)
	{
		r=i%b;
	   if(r==0)
		{
			cout<<i<<endl;
		}
	
		
	}
    }
	return 0;
}
