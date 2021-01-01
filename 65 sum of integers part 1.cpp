#include<iostream>
using namespace std;
int main()
{
	float a,b,c=1;
	cout<<"Enter the range to calculate the sum of reciprocals =";
	cin>>a;
	for(float i=2;i<=a;i++)
	{
     b=c+1/i;
	 cout<<c<<"+ 1/"<<i<<"="<<b<<endl;
	 c=b;	
	}
	cout<<"Sum is ="<<b;
	return 0;
}
