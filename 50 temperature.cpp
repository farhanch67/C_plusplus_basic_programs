#include<iostream>
using namespace std;
int main()
{
	double a,b,r;
	cout<<"Enter the temperature =";
	cin>>b;
	cout<<"Enter the type of temperature conversion \n1=(Celcius)\n2=(Farhenheit)\n3=(Kelvin)\n4=(Renkie) =";
	cin>>a;
	if(a!=1 && a!=2 && a!=3 && a!=4)
	{
		cout<<"Wrong input";
	}
	if(a==1)
	{
		r=32+b*1.8;
		cout<<"Temperature is "<<r<<" Celcius";
	}
	if(a==2)
	{
		r=32-b/18;
		cout<<"Temperature is "<<r<<" farhenheit";
	}
	if(a==3)
	{
		r=273.15+b;
		cout<<"Temperature is "<<r<<" kalvin";
	}
	if(a==4)
	{
		r=b*5/9;
		cout<<"Temperature is "<<r<<" rankie";
	}
	
	return 0;
	
}
