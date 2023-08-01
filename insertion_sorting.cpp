#include<iostream>
using namespace std;
int main()
{
   int arr[6]={12,31,25,8,32,17};
   for(int i=1;i<6;i++)
   {
       int element=arr[i];
       int j=i-1;
    while(j>=0 && arr[j]>element)
      {
        arr[j+1]=arr[j];
        j--;
        arr[j+1]=element;

for(int k=0;k<6;k++)
{
  cout<<arr[k]<<" ";
}
cout<<endl;
      }
      for(int k=0;k<6;k++)
{
  cout<<arr[k]<<" ";
}
cout<<endl;
   }
cout<<endl;
cout<<"This program is done by Dhruvi_22cs053"<<endl;
return 0;
}

