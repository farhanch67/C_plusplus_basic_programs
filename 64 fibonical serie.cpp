#include<iostream>
using namespace std;
int main()
{
	int a,b=0,c=1;
	cout<<"Enter the range of Fibonical series =";
	cin>>a;
	for(int i=0;i<=a;i=b+c)
	{
		cout<<i<<endl;
		b=c;
		c=i;
	}
	return 0;
}
