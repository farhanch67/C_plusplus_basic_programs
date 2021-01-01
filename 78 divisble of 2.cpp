#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the limit of integers =";
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		b=i%5;
		if(b==0)
		{
			cout<<i<<endl;
		}
	}
	
	return 0;
}
