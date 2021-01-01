#include<iostream>
using namespace std;
int main()
{  int a,b,c,d;
float res;
cout<<"Enter the number of values 2 or 3";
cin>>a;
if(a==2)
 	{
 	cout<<"Enter the first value :";
	cin>>b; 
	cout<<"Enter the second value :";
 	cin>>c;
	 res=b+c;
	 cout<<"sum is = "<<res<<endl;	
	 res=b-c;
	 cout<<"difference  is = "<<res<<endl;
	 res=b*c;
	 cout<<"product is = "<<res<<endl;
	 res=b/c;
	 cout<<"division is = "<<res;
	 }
	if(a==3)
 	{
 	cout<<"Enter the first value :";
	cin>>b; 
	cout<<"Enter the second value :";
 	cin>>c;
 	cout<<"Enter the third value : ";
    cin>>d;
	 res=b+c+d;
	 cout<<"sum is = "<<res<<endl;	
	 res=b-c-d;
	 cout<<"difference  is = "<<res<<endl;
	 res=b*c*d;
	 cout<<"product is = "<<res<<endl;
	 res=b/c/d;
	 cout<<"division is = "<<res;
	 }
 
	return 0;
}
