#include <iostream>
using namespace std;

int main() {
    int X;
    float Y;
    
    cin>>X;
    cin>>Y;
    
    if(X%5==0 && X<=(Y-0.50))
    { printf("%.2f",(Y-0.50-X));}
    else
    printf("%.2f",Y);
	// your code goes here
	return 0;
}
