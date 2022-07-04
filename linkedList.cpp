#include<iostream>

using namespace std;
class List;
class Node
{ 
public:
   int data;
 
  

   int get_data()
     {return data;}
   Node* next;
   Node(int d):data(d),next(nullptr){}      //constructor used here for initialization of data members
   friend class List;
};
 
class List{
public:
   Node* head;
   Node* tail;

   List():head(nullptr),tail(nullptr){}
   Node* begin()
    { return head;}
   
   void push_front(int data)
      {   if(head==nullptr)
            {   Node* n= new Node(data);
                head=tail=n;

            }
            else{
                Node* n= new Node(data);
                n->next=head;
                head=n;
            }
     }
    void push_back(int data)
      {  if(tail==nullptr)
         {
             Node * n=new Node(data);
             head=tail=n;
         }
         else
         {  Node * n=new Node(data);
             tail->next=n;
            tail=n;

         }
      }
    void insert(int data, int pos)        //pos=position
      {   if(pos==0)
             push_front(data);
          else
          {   Node* temp=head;
              for(int i=0;i<pos;i++)
                 temp=temp->next;
               Node* n = new Node(data);
               n->next=temp->next;
               temp->next=n; 
           }
    }
    
    void printd(){
        Node* temp=head;
     while(temp!=NULL )
       {  cout<<temp->data<<"->";
          temp=temp->next;

       }
    }
      
};

int main()
{    List l;
     l.push_back(0);
     l.push_front(2);
     l.push_front(6);
     l.push_back(7);
     l.printd();
     cout<<"done";
       return 0;

   


}