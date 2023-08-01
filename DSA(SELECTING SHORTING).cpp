#include <iostream>
using namespace std;
int main()
{

int n;
cout<<"Enter the size of array"<<endl;
cin>>n;

int arr[n];
cout<<"Enter the elements of array"<<endl;
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}

for(int i=0;i<n;i++)
{
  int small=i;
/*compare 1st and 2nd element and if element on j index
is small than swap it after that compare that swapped
(which is small )element again*/
  for(int j=i+1;j<n ;j++)
  {
      if(arr[small]>=arr[j])
      {
          swap(arr[small],arr[j]);
      }


for(int k=0;k<n;k++)
{
  cout<<arr[k]<<" ";
}
cout<<endl;
  }
cout<<endl;
cout<<"After "<<i+1<<" pass Array is"<<endl;
cout<<endl;
for(int k=0;k<n;k++)
{
  cout<<arr[k]<<" ";
}
cout<<endl;

}
cout<<"This program is done by 22cs053_Dhurvi"<<endl;
return 0;
}
