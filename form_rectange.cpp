#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    //test case//
 int t;
 cout<<"how many test case you want? --> ";
 cin>>t;
 while(t--)
 {
    int n;
    cout<<"enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Elements of Array"<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
     sort(arr,arr+n) ;
     cout<<"sorted Array"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
    cout<<endl;
    int A=1;
    int count=0;
    for(int i=n-1;i>=0;)
     {
         if(arr[i]==arr[i-1])
         {
            A=A*arr[i];
            i=i-2;
            count++;
         }
         if(count==2)
         {
            break;
         }
         else
         {
             i--;
         }

     }

       cout<<"Maximum Area: ";
       cout<<A<<endl;
     }
    return 0;

 }


