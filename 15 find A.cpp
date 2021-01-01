#include<iostream>
using namespace std;
int main()
{
	int a,b,c,A;
	cout<<"Find the value of A when A=(a+b)^2-2ab"<<endl;
	cout<<"Enter the value of a =";
	cin>>a;
	cout<<"Enter the value of b =";
	cin>>b;
	A=(a+b)*(a+b)-2*a*b;
	cout<<"Value of A ="<<A;
	return 0;
}
