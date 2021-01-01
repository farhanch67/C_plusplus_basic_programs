#include<iostream>
using namespace std;
int main()
{
	float a,v,t;
	cout<<"Enter the Velocity :";
	cin>>v;
	cout<<"Enter the time taken in sec:";
	cin>>t;
	a=v/t;
	cout<<"Accelleration = "<<a<<"m/s";
	return 0;
}
