#include<iostream>
using namespace std;
int main()
{
	int a,b=0,c=1;
	cout<<"Enter the range of series to display =";
	cin>>a;
	for(int i=1;i<=a;i=b+c)
	{
		cout<<i<<endl;
		b=i;c=i;
	}
	return 0;
}
