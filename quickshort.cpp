#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr,int s,int e)
{
     int pivot=arr[s];
     int cnt=0;
     for(int i=s+1;i<=e;i++)
     {
         if(arr[i]<=pivot)
         {
             cnt++;
         }
     }
         int pindex=s+cnt;
         swap(arr[pindex],arr[s]);
         int i=s,j=e;
    while(i<pindex && j>pindex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
         if(i< pindex && j > pindex) {
            swap(arr[i++], arr[j--]);
         }
    }
     for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
 cout<<endl;

    return pindex;
}
void quicksort(vector<int>&arr,int s,int e)
{
    if(s>=e)
    {
        return;
    }

    int p = partition(arr, s, e);

    // LEFT PART
    quicksort(arr, s, p-1);
    //RIGHT PART
    quicksort(arr, p+1, e);

}
vector<int> quickSort(vector<int> &arr)
{
    quicksort(arr,0,arr.size()-1);
    return arr;

}

int main()
{
    vector<int> arr={5,3,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr);
    cout<<"This program is done by 22cs053_Dhurvi"<<endl;
    return 0;
}
