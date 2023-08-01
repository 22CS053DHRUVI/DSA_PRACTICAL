#include <iostream>
using namespace std;
int main()
{

//int arr[10]={10,12,2,14,16,5,3,50,22,1};
int arr[10]={1,2,3,5,10,12,14,16,2,50};
for(int i=1;i<=10;i++)
{
  for(int j=0;j<10 - i;j++)
  {
 if(arr[j]>arr[j+1])
 {
  int temp=arr[j];
  arr[j]=arr[j+1];
  arr[j+1]=temp;
 }
for(int k=0;k<10;k++)
{
  cout<<arr[k]<<" ";
}
cout<<endl;
  }
cout<<endl;
cout<<"After "<<i<<" pass Array is"<<endl;
cout<<endl;
for(int k=0;k<10;k++)
{
  cout<<arr[k]<<" ";
}
cout<<endl;

}
return 0;
}

