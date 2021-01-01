#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enetr the month number =";
	cin>>a;
	if(a>=4 && a<=6)
	{
		cout<<"weather is summer";
	}
	if(a>=7 && a<=9)
	{
		cout<<"weather is spring";
	}
	if(a>=10 && a<=12)
	{
		cout<<"Weather is Winter ";
	}
	if(a>=1 && a<=3)
	{
		cout<<"Weather is Autuman";
	}
	return 0;
	
}
