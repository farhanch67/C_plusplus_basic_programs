#include<iostream>
using namespace std;
int main()
{
	int a,b,c,r;
	cout<<"Enter the starting number of range =";
	cin>>a;
	cout<<"Enter the ending number of range =";
	cin>>b;
	cout<<"Enter the number whose divisble are find =";
	cin>>c;
	if(c!=0)
	{
	for(int i=a+1;i<b;i++)
	{
		r=i%c;
		if(r==0)
		{
			cout<<i<<endl;
		}
		
	}
    }
    else
    {
    	cout<<"Given number is zero :";
	}
	return 0;
}
