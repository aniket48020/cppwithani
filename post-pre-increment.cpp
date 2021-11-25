#include<iostream>
using namespace std;
int main()
{
    int a=10,b ,c,d=0,e=10;
    b=a++;
    c=--a;
    cout<<b<<endl;
    cout<<c<<endl;
    if(d++ && d>0)   //&& operator first check or execute 1st condition, if it is true- then check/execute 2nd condition otherwise not check/execute 2nd condition
      cout<<"yes"<<endl;    // any value >0 is true in if else statement and if value<=0 ,then false. here d++ is false( as x=d++ take the initaial value of d ,then d increases), so d>0 not checked
    else
     cout<<d<<endl;
    if(a>0 || e++)     // || operator first check/execute 1st statement, if it is true then don't check 2nd statement.if false,then check or execute 2nd statement.
       cout<<"yes"<<endl;   // a>0 is true, so 2nd condition of e++ not checked or executed. so e=10.
    else
      a=a+1;
    cout<<a<<e<<endl;
    // the main purpose of && and || operator is to make the statement true in anyhow if it can.
    return 0;




}