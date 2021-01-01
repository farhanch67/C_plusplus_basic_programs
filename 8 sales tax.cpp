#include<iostream>
using namespace std;
int main()
{ 
    int m,o,t;
    cout<<"Enter the amount :";
    cin>>o;
    cout<<"Enter the Tax percent :";
    cin>>t;
    m=o*t/100;
    cout<<"tax ="<<m;
	return 0;
}
