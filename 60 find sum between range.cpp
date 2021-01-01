#include<iostream>
using namespace std;
int main()
{
    int a,b,r;
    cout<<"Enter the start number of range=";
    cin>>a;
    cout<<"Enter the last number of range =";
    cin>>b;
    for(int i=a+1;i<b;i++)
    {
    	r=r+i;
	}
	cout<<"Sum is ="<<r;
   	return 0;
}
