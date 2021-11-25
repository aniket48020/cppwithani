#include<iostream>
using namespace std;
void sub(int arr[],int n)
{  for(int i=0; i<n;i++)
   {   for(int j=i;j<n;j++)
        { for(int k=i;k<=j;k++)
           cout<<arr[k]<<",";
          cout<<endl;
        }

   }

}
int main()
{  int arr[199];int n;
      cin>>n;
    for(int i=0;i<n;i++)
      cin>>arr[i];
    sub(arr,n);

    return 0;

}