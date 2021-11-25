#include<iostream>
using namespace std;
int sub(int *arr,int n)
{       int c=0;
    for(int i=0;i<n;i++)
  {  for(int j=i;j<n;j++)
     {  for(int k=i;k<=j;k++)
         {c=c+arr[k];
            cout<<arr[k];
         } cout<<endl;
     }
  }
  return c;

}
int main(){
   int arr[]={1,2,3,4}; 
   int n=(sizeof(arr))/(sizeof(int));
   cout<<sub(arr,n);
   return 0;

}