#include<iostream>
using namespace std;
int firstocc(int arr[], int n, int key)
{
  int s=0,e=n-1;
  int mid=s+(e-s)/2;
  int ans1=-1;
  while(s<=e)
  {
    if(arr[mid]==key)
    {
         ans1=mid;
         e=mid-1;
    }
    else if(key>arr[mid])
    {
      s=mid+1;
    }
    else if(key<arr[mid])
    {
       e=mid-1;
    }
      mid=s+(e-s)/2;
  }
 return ans1;
}
int lastocc(int arr[], int n, int key)
{
  int s=0,e=n-1;
  int mid=s+(e-s)/2;
  int ans2=-1;
  while(s<=e)
  {
    if(arr[mid]==key)
    {
         ans2=mid;
         s=mid+1;
    }
    else if(arr[mid]<key)
    {
      s=mid+1;
    }
    else if(arr[mid]>key)
    {
       e=mid-1;
    }
      mid=s+(e-s)/2;
  }
 return ans2;
}

int main()
{

   int first_arr[10]={0,0,1,1,1,1,2,2,3,4} ;
   cout<<"first occurrence of 1 is at index no "<<firstocc(first_arr,10,2)<<endl;
   cout<<"last occurrence of 1 is at index no "<<lastocc(first_arr,10,2)<<endl;
   cout<<"Total no of occurrence of 1 in array is "<<lastocc(first_arr,10,2)-firstocc(first_arr,10,2)+1<<endl;
}
