#include<iostream>
using namespace std;
int main()
{ float m,v,g,h,d;
cout<<"Enter the value of m =";
cin>>m;
cout<<"Enter the value of g =";
cin>>g;
cout<<"Enter the value of v =";
cin>>v;
cout<<"Enter the value of h =";
cin>>h;
d=m*v*v/2+m*g*h;
cout<<"Energy ="<<d;
	return 0;
}
