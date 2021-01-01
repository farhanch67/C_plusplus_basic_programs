#include<iostream>
using namespace std;
int main()
{
  float f,m,v,r;
  cout<<"Enter the Mass of body =";
  cin>>m;
  cout<<"Enter the Velocity of body =";
  cin>>v;
  cout<<"Enter the Radius of circle =";
  cin>>r;
  f=m*v*v/r;
  cout<<"Centripetal force ="<<f; 

	return 0;
}
