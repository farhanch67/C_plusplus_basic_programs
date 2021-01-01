#include<iostream>
using namespace std;
int main()
{
	double a,b,r;
	cout<<"Enter the weight in kg =";
	cin>>a;
	cout<<"Enter the conversion type number: \n1=(Grams)\n2=(mililgrams)\n3=(grains)\n4=(pounds)\n=";
	cin>>b;
	if(b==1)
	{
		r=1000*a;
		cout<<"Weight in grams ="<<r;
	}
	if(b==2)
	{
		r=10000*b;
		cout<<"Weight in miligrams ="<<r;
	}
	if(b==3)
	{
		1000*15.43*b;
		cout<<"Weight in grains ="<<r;
	}
	if(b==4)
	{
		r=2.20*b;
		cout<<"Weight in pounds ="<<r;
   }
    if(b!=1 && b!=2 && b!=3 && b!=4)
   {
   	cout<<"Wrong input";
   }
	return 0;
}
