#include<iostream>
using namespace std;
int main()
{
	int a,b,r,c=2,d,e=0;
	cout<<"Enter the starting number of range =";
	cin>>a;
	cout<<"Enter the ending number of range =";
	cin>>b;
	for(int i=a+1;i<b;i++)
	{
		r=i%c;
		if(r==0)
		{
			d++;
		}
		if(r==1||r==-1)
		{
			e++;
		}
		
	}
	cout<<"Even numbers ="<<d<<endl;
	cout<<"Odd numbers ="<<e;
	return 0;
}
