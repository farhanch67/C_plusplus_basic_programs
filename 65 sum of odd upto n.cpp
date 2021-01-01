#include<iostream>
using namespace std;
int main()
{
	float a,b,c=1;
	cout<<"Enter the range to calculate the sum of reciprocals of odd numbers =";
	cin>>a;
	for(float i=3;i<=a;i+=2)
	{
     b=c+1/i;
	 cout<<c<<"+ 1/"<<i<<"="<<b<<endl;
	 c=b;	
	}
	cout<<"Sum is ="<<b;
	return 0;
}
