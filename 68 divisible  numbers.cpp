#include<iostream>
using namespace std;
int main()
{
	int a,b,r;
	cout<<"Enter the length of integers =";
	cin>>a;
	cout<<"Enter the number whose divisble numbers are find =";
	cin>>b;
	for(int i=2;i<=a;i++)
	{
		r=i%b;
		if(r==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
