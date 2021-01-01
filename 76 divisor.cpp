#include<iostream>
using namespace std;
int main()
{   int a;
	cout<<"Enter the number to find divisor of number=";
	cin>>a;
	for(int i=6;i<=a;i++)
	{
		if(a%i==0)
		{
			cout<<i<<endl;
		}
	}
	
	return 0;
}
