#include <bits/stdc++.h>
using namespace std;

void MERGE( int arr[],int start , int mid , int end)
{
    int n;
    int left_size = mid - start + 1;
    int right_size = end - mid;

    int LEFT_ARRAY[left_size] ;
    int RIGHT_ARRAY[right_size];

    for(int i = 0 ; i<left_size ; i++)
    {
        LEFT_ARRAY[i] = arr[i + start];
    }


    for(int j = 0 ; j < right_size ; j++)
    {
        RIGHT_ARRAY[j] = arr[j + mid + 1];
    }

    int i = 0;
    int j = 0;
    int k = start;
    while(i<left_size && j<right_size)
    {
        if(LEFT_ARRAY[i]<RIGHT_ARRAY[j])
        {
            arr[k] = LEFT_ARRAY[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = RIGHT_ARRAY[j];
            k++;
            j++;
        }
    }

    while(i<left_size)
    {
        arr[k] = LEFT_ARRAY[i];
        k++;
            i++;

    }
    while(j<right_size)
    {
        arr[k] = RIGHT_ARRAY[j];
        k++;
            j++;
    }

}

void Merge_Sort(int arr[], int start , int end)
{
    int n;
   if(start<end)
{
    int mid = (start+end)/2;
    // LEFT PART
    Merge_Sort(arr,start,mid);

    // Right part
    Merge_Sort(arr,mid+1,end);


    // merge
    MERGE(arr,start,mid,end);

}

}
int main()
{
    cout << "Enter Total number of elements in the array = ";
    int n ;
    cin >> n ;
    int arr[n];
    for(int i = 0 ; i< n ; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = n - 1;
    Merge_Sort(arr,start , end);

    for(int i = 0 ; i<n ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout<<endl;
    cout<<"This program is done by Dhruvi_22cs053"<<endl;
}
