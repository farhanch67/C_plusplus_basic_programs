#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the number to display even numbers upto =";
	cin>>a;
	for(int i=2;i<=a;i+=2)
	{
		cout<<i<<endl;
	}
	return 0;
}
