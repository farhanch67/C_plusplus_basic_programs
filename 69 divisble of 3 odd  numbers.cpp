#include<iostream>
using namespace std;
int main()
{
	int a,b=3,r;
	cout<<"Enter the length of integers =";
	cin>>a;
	for(int i=1;i<=a;i+=2)
	{
		r=i%b;
		if(r==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
