#include<iostream>
using namespace std;
void rev(int *arr, int n)
{   int s=0; int e=n-1;
    while(s<e)
{   swap(arr[s],arr[e]);
     s++;
     e--;
}

}
int main()
{ int arr[]={2,4,54,32,43,22,32,323,43}; 
  int n=(sizeof(arr))/(sizeof(int));
  rev(arr,n);
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
  return 0;



}