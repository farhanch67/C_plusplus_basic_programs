#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the city code between (125 to 131)=";
	cin>>a;
	if(a==126)
	{
		cout<<"Lahore";
	}
	if(a==127)
	{
		cout<<"Islamabad";
	}
	if(a==128)
	{
		cout<<"Karachi";
	}
	if(a==129)
	{
		cout<<"Gujrat";
	}
	if(a==130)
	{
		cout<<"Daska";
	}
	else
	{
		cout<<"No data exist";
	}
	return 0;
}
