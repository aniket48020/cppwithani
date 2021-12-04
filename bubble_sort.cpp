#include<iostream>  //take the max element to end one by one  by swapping 
using namespace std;
void sort(int *arr,int n)
{  for(int times=0;times<n-1;times++)
{   for(int j=0;j<n-1-times;j++)
     { if(arr[j]>arr[j+1])
      swap(arr[j],arr[j+1]);
     }

}
}
int main()
{
    int arr[]={1,3,4,5,56,2,21};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,n);
    for(int x:arr)
      cout<<x<<" ";
      return 0;
}