#include <iostream>
#include <climits>
#include<vector>
using namespace std;

void sort(int arr[], int n)
{
    int a = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > a)
            a = arr[i];
    }   
    vector<int> freq(a + 1, 0);
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;
        int j=0;
    for (int i = 0; i < a + 1; i++)
    {
        while (freq[i] > 0)
        {
            arr[j]=i;
            freq[i]--;
            j++;
        }
    }
}
int main()
{
    int arr[] = {1, 4, 23, 1, 23, 2, 2, 4, 8, 3, 5, 8, 2, 5, 94};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, n);
    for(int x : arr)
      cout<<x<<" ";
    return 0;
}