#include<iostream>
using namespace std;
void mergearray(int arr[],int s,int mid,int e)
{
    int li=mid-s+1,ri=e-mid;
    int LA[li];
    int RA[ri];
    for(int i=0;i<li;i++)
    {
        LA[i]=arr[s+i+1];
    }
    for(int i=0;i<ri;i++)
    {
        RA[i]=arr[mid+1+i];
    }

    int i=0,j=0,k=s;
    while(i<li && j<ri)
    {
        if(LA[i]<RA[j])
        {
            arr[k]=LA[i];
            k++;i++;
        }
        else{
            arr[k]=RA[j];
            k++;j++;
        }
    }
    while(i<li)
    {
        arr[k]=LA[i];
        i++;k++;
    }
    while(j<ri)
    {
        arr[k]=RA[j];
        j++;k++;}
}
void merge(int arr[],int s,int e)
{
    if(s<e)
    {
    int mid=(s+e)/2;
    merge(arr,s,mid);
    merge(arr,mid+1,e);
    mergearray(arr,s,mid,e);
    }
}
int main()
{
   int arr[]={5,4,3,2,1};
   int n=sizeof(arr)/sizeof(arr[0]);
   merge(arr,0,n);
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<"This program is done by 22cs053_Dhurvi"<<endl;
   cout<<endl;
   return 0;
}

