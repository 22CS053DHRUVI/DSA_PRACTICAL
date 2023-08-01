#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
~Node()
{
  int value=this->data;
  if(this->next!=NULL)
  {
    delete next;
    this->next=NULL;
  }
  cout<<"memory is free for node with data"<<endl<<value<<endl;
}
};

void InsertAthead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
//inserting element at tail//

void InsertAttail(Node* &tail,int d1)
{
    Node* temp=new Node(d1);
/*temp-> temp is new creating node
 tail's(last elements next is pointing to
the new creating new node
 */
    tail->next=temp;
    //
    tail=temp;
}

void InsertAtposition(Node*&tail,Node*&head,int position,int d)
{
//insert at start//
  if(position==1)
 {
  InsertAthead(head,d);
  return;
 }
  Node* temp=head;
//we are at starting node//
  int cnt=1;
  while(cnt<position-1)
  {
    temp=temp->next;
    cnt++;
  }
//inserting at last position//
 if(temp->next==NULL)
 {
     InsertAttail(tail,d);
     return;
 }
 Node* nodetoinsert=new Node(d);
 nodetoinsert->next=temp->next;
 temp->next=nodetoinsert;
}

void deletenode(int position,Node*&head)
{
//for deleting first node//
  if(position==1)
   {
     Node*temp=head;
     head=head->next;
     temp->next=NULL;
     delete temp;
   }
//for deleting last node or middle node//
  else
  {
    Node*curr=head;
    Node*pre=NULL;
    int cnt=1;
    while(cnt<position)
    {
     pre=curr;
     curr=curr->next;
     cnt++;
    }
  pre->next=curr->next;
  curr->next=NULL;
  delete curr;
  }
}

void printnode(Node* &head)
{
    Node* temp=head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* node1=new Node(10);

    Node* head=node1;
    Node* tail=node1;
    printnode(head);
    InsertAttail(tail,12);
    printnode(head);
    InsertAttail(tail,15);
    printnode(head);
    InsertAtposition(tail,head,4,30);
    printnode(head);
    deletenode(4,head);
    printnode(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    return 0;
}
