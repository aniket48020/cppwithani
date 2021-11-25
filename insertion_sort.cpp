#include <iostrEAM>
using namespace std;
void sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int prev = i - 1;
      /*  while(prev>=0 and arr[prev]>current)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }      
        arr[prev+1]=current;*/
        //we take arr[i]= current to aviod any confusion with the compiler as the prev is updating and it has i. prev=i-1.
        while (prev >= 0 )
        { if(arr[prev] > current)
           {arr[prev + 1] = arr[prev];
            prev--;}
            else{
                arr[prev+1]=current;
                break;
            }
        }

        
        
    }
}
int main()
{
    int arr[] = {1, 4, 3, 54, 13, 134, 22}, n;
    n = sizeof(arr)/sizeof(int);
    sort(arr, n);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}