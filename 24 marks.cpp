#include<iostream>
using namespace std;
int main()
{
	float a,b,r;
	cout<<"Enter the obtained marks =";
	cin>>a;
	cout<<"Enter the total marks =";
	cin>>b;
	r=a/b*100;
	if(r>40)
	{
	cout<<"Student is passed with "<<r<<"%"<< " marks";		
	}
	else
	{
		cout<<"Student is failed having marks "<<r<<"%";
	}
	return 0;
	
}
