#include <iostream>
using namespace std;
void sum(int arr[], int n)
{
    int prefix[n]={0};
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int largest = 0;
    for (int i = 0; i < n; i++)
    {  
        for (int j = i; j < n; j++)
        {  int summ = 0;
          if(i==0)
            summ= prefix[j];
        else
         summ = prefix[j] - prefix[i - 1];
               
            largest = max(largest, summ);
        } 
    } cout<<largest;
}
int main()
{
    int arr[] = {1, 3, 4, 5, -8, -5, 7}, n;
    n = sizeof(arr)/sizeof(int);
    sum(arr, n);
    return 0;
}