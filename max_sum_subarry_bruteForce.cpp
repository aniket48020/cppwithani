#include<iostream>
using namespace std;
int sum(int arr[],int n)
{    int largest=INT_MIN;
    for(int i=0;i<n;i++)
{   for(int j=i;j<n;j++)
      {    int c=0;
       for(int k=i;k<=j;k++)
        { c+=arr[k];
         largest=max(largest,c);}
      }
}
  return largest;
}
int main()
{ int arr[100], n;
    
    cin>>n;
    for(int i=0;i<n;i++)
      cin>>arr[i];
    cout<<sum(arr,n);
      return 0;



}