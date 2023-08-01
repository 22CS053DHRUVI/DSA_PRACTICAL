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
    int key;
    cout<<"Enter key Element: ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
      if(arr[i]==key)
      {
       cout<<arr[i-1]<<" "<<arr[i+1]<<" "<<arr[i+2];
      }
      if(arr[n-2]==key)
      {
          cout<<arr[n-4]<<" "<<arr[n-3]<<" "<<arr[n-1];
          break;
      }
        }
 }
 return 0;
}
