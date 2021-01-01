#include<iostream>
using namespace std;
int main()
{
	double a,b,r;
	cout<<"Enter the obtained marks of student ="  ;
	cin>>a;
	cout<<"Enter the total marks =";
	cin>>b;
	r=a/b*100;
	cout<<"Result ="<<r;
	if(r>=90)
	{
		cout<<"Grade is A+ ="<<r;
	}
	if(r<90 && r>=85)
	{
	 cout<<"Grade is A"<<"="<<r;	
	}
	if(r<85 && r>75)
	{
		cout<<"grade is B"<<"="<<r;
	}
	if(r<75 && r>65)
	{
		cout<<"Grade is C"<<"="<<r;
	}
	if(r<65 && r>50)
	{
		cout<<"Grade is D"<<"="<<r;
	}
	if(r<50 && r>0)
	{
		cout<<"Grade is F"<<"="<<r;
	}
	return 0;
}
