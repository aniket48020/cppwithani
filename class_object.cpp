#include<iostream>
using namespace std;
class Product{   
  int id;
  int mrp;
  char name[100];
  int sp;
  public:
    void set_mrp(int price)   //setter to set values of private variables
    {
      mrp=price+6778;
    }
    int show_mrp()   //getter   to get or return the values of privately defined variables
    {
      return mrp;
    }
};
int main()
{
   Product obj;
   obj.set_mrp(470);
   cout<<obj.show_mrp();
   return 0;


}