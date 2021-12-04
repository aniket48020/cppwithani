#include <iostream>
#include<algorithm>
using namespace std;  //find the min element position from starting, and then swap it with starting value.
void sort(int *arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int current = arr[i];
        int min_position=i;
        
        for (int j = i + 1; j < n; j++)
          {  if(arr[min_position]>arr[j])  
            min_position=j;}//we want address/position of min element ,so that we can swap it with the positon of current.
         swap(arr[min_position],arr[i]);    // swap(arr[min_position],current) -this is wrong because current is a constant value
   }                                       //so it means(swap(arr[min],5)) so, arr[min]=5 but, what about arr[i],i index is nit here. here 5 will update to eg 87 as current not as arr[i].
}
int main()
{

    int arr[] = {1, 3, 2, 4, 6, 8, 2, 5, 1, 3};
    int n=sizeof(arr)/sizeof(int);
    sort(arr, n);
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    return 0;
}