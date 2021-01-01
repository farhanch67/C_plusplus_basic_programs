#include<iostream>
using namespace std;
int main()
{
   int a,b,r;
   cout<<"Enter the basic salary =";
   cin>>a;
   cout<<"Enter the pay type (1,2,3) =";
   cin>>b;
   if(b==1)
   {
   	r=a/52;
   	cout<<"Base pay ="<<r;
   }
   if(b==2)
   {
   	r=a/24;
   	cout<<"Basic pay ="<<r;
   }
   if(b==3)
   {
   	r=a/12;
   	cout<<"Basic pay ="<<r;
   }
   else 
   {
   	cout<<"no data";
   }
   return 0;
}
