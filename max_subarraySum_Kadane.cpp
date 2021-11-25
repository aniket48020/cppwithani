#include<iostream>
using namespace std;
int sum(int arr[],int n)
{   int curr_sum=0,min_sum=0, max_sum=INT_MIN;
    for(int i=0; i<n;i++)
    {  curr_sum+=arr[i];
        max_sum=max(max_sum,(curr_sum-min_sum));
        min_sum=min(curr_sum,min_sum);
     }  return max_sum;


}
int main()
{  int arr[200],n;
 cin>>n;
 for(int i=0;i<n;i++)
 {cin>>arr[i];}
 cout<<sum(arr,n);
 return 0;


}