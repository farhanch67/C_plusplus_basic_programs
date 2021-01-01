#include<iostream>
using namespace std;
int main()
{ float x,v,t,a,d;
cout<<"Enter the value of x =";
cin>>x;
cout<<"Enter the value of v =";
cin>>v;
cout<<"Enter the value of t =";
cin>>t;
cout<<"Enter the value of a =";
cin>>a;
d=x+v*t+1/2*v*t*t;
cout<<"Distance ="<<d;
	return 0;
}
