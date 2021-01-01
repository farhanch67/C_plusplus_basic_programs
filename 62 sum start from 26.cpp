#include<iostream>
using namespace std;
int main()
{
    int a,b,r;
    cout<<"Enter the range to find sum starting from 26 =";
    cin>>a;
    for(int i=26;i<=a;i++)
    {
    	r=r+i;
	}
	cout<<"Sum is ="<<r;
   	return 0;
}
