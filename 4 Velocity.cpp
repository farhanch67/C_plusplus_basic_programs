#include<iostream>
using namespace std;
int main()
{
	float v,d,t;
	cout<<"Enter the Distance covered in Meters:";
	cin>>d;
	cout<<"Enter the time taken in sec:";
	cin>>t;
	v=d/t;
	cout<<"Velocity = "<<v<<"m/s";
	return 0;
}
