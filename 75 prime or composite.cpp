#include<iostream>
using namespace std;
int main() 
{
    for (int i=50; i<100; i++) 
        for (int j=2; j<i; j++)
        {
            if (i % j == 0) 
                {
			     break;	
                }
			else if (i == j+1)
                {
				cout << i << " ";
                }
        
		}
		   
    return 0;
}
