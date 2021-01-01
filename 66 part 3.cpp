#include<iostream>
using namespace std;
int main()
{
	double a,b=5;
	cout<<"Enter the limit to show serie upto =";
	cin>>a;
	for(double i=5;i<=a;i=i*b)
	{
		cout<<"1/"<<i<<endl;
		
	}
	return 0;
}
