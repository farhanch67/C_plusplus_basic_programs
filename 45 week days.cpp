#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enetr the number of day (1 to 7) =";
	cin>>a;
	if(a==1)
	{
		cout<<"saturday";
	}
	if(a==2)
	{
		cout<<"sunday";
	}if(a==3)
	{
		cout<<"monday";
	}if(a==4)
	{
		cout<<"tuesday";
	}if(a==5)
	{
		cout<<"wednesday";
	}if(a==6)
	{
		cout<<"thursday";
	}if(a==7)
	{
		cout<<"friday";
	}
	else
	{
		cout<<"Wrong number";
	}
	return 0;
}
