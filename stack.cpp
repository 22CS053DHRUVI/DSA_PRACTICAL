#include<iostream>
#include<algorithm>
using namespace std;
class Stack
{
    int stack[100];
    int n=100;
    int top=-1;
    public:
void push()
{
   if(top>=n)
   {
     cout<<"overflow condition"<<endl;
   }
   else
   {
       int value;
       cout<<"enter the element: ";
       cin>>value;
       top=top+1;
       cout<<"top is "<<top<<endl;
       stack[top]=value;

   }
}
void pop()
{
    if(top==-1)
    {
        cout<<"underflow condition"<<endl;
    }
    else
    {
      cout<<"Element in stack is: "<<stack[top]<<endl;
      top=top-1;

    }
}
void display()
{
cout<<"Elements in the stack"<<endl;
if(top>=0)
{

 for(int i=top;i>=0;i--)
 {
     cout<<stack[i]<<endl;
 }
}
}
};
int main()
{
    Stack s;
    int n=100;
    int c;
    for(int i=0;i<n;i++)
    {

    cout<<"select function"<<endl;
    cout<<" 1.push() function"<<endl;
    cout<<" 2.pop() function"<<endl;
    cout<<" 3.display() function"<<endl;
    cout<<" 4.peek() function"<<endl;

    cin>>c;

    switch(c)
    {
    case 1:
        s.push();
        break;
    case 2:
        s.pop();
        break;
    case 3:
        s.display();
        break;
    default:
        break;
    }
    }
    return 0;
}
