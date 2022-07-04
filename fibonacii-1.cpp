#include<iostream>
using namespace std;
int main()
{
    int i=0,j=1,n,c;
    cin>>n;
    for(int k=0;k<n;k++)
    {   
        int c=i+j;
        cout<<c<<endl;
        i=j;
        j=c;   
    }
    return 0;
}