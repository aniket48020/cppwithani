#include<iostream>
using namespace std;
int func(int arr[], int n, int key)
{ int s=0; int e=n-1; 
   while(s<=e)
    {    int mid =(s+e)/2;
        if(arr[mid]==key)
        return mid;
    else if(arr[mid]>key)
       e=mid-1;
    else 
    s=mid+1;
   }
    return -1;


}
int main(){
   int arr[]={1,23,54,65,75,86,98,654}; int key;
   int n=(sizeof(arr))/(sizeof(int));
   cin>>key;
   int c= func(arr, n, key);
   if(c!=-1)
    cout<<"element present at"<<c<<"index";
    else
     cout<<"element not present";
return 0;



}