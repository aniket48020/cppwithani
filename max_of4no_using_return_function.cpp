#include <iostream>

using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int add(int a,int b,int c,int d)
{   int y;
    if(a>b && a>c && a>d)
     y=a;
    else if(b>a && b>c && b>d)
     y=b;
    else if(c>a && c>b && c>d)
     y=c;
    else {
    y=d;
    }
    return y;
}

int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans=add(a,b,c,d);
    cout<<ans;
    
    return 0;
}
