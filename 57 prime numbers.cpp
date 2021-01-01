#include<iostream>
using namespace std;
int main()
{
   int a,r=1;
   cout<<"Enter the length to print odd numbers =";
   cin>>a;
   for(int i=0;i<=a;i+=2)
   {
   	r=r+i;
   	
   }
   cout<<"Sum of odd numbers upto "<<a<<" = "<<r;
   return 0;
}
