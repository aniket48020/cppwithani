#include<iostream>
using namespace std;
int func(int arr[],int n, int key)
{  for (int j=0;j<n;j++)
 { if(arr[j]==key)
    {
    return j;}
   }
 return -1;


}
int main()
{ int arr[100]; int i; int key ;int n; int c;
    cin>>n;
    for(i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    c=func(arr,n, key);
    if(c!=-1)
      cout<<"element present at"<<c<<"index";
    else
      cout<<"element not present";
 return 0;
}





