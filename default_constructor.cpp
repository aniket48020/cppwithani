#include<iostream>

using namespace std;
#include<string.h>
class Project
{  int mrp;
   int sp;
  // char comp[100];
  char *comp;  //dynamic array
   public:
     Project()                 //   2 constructor defined with different parameters , so it is constructor overloading
     {cout<<"hello"<<endl;  }
     Project(int mr,int s,char *n)    //parametrized constructor      // int mrp,int sp
     {  /*this->mrp=mrp;          when we use same vaiable name
        this->sp=sp;*/
        mrp=mr;
        sp=s;
        comp=new char[strlen(n)+1];
        strcpy(comp,n);


     }
     void get_mrp()
     {
         cout<<comp;
         cout<<mrp;
     }


};
int main()
{
     Project camera(100,50,"aniket");
     camera.get_mrp();
     //Project camera;
     return 0;
}