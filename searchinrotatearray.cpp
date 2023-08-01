#include <iostream>
using namespace std;
int getPivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;

        }
        mid=s+(e-s)/2;
    }
    return e;
}
bool binarySearch(int arr[], int s,int e, int target) {
    int start=s ;
    int end = e;
     int mid = start + (end -start) / 2;
    while (start <= end) {

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            s = mid + 1;
        else
           e = mid - 1;
    }
      mid=s+(e-s)/2;

    return -1;
}
int findposition(int arr[],int n,int k)
{
    int pivot=getPivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1])
    {
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
}
int main()
{

    int Arr[5]={3,8,10,17,1};
     cout<<"Pivot is: "<<getPivot(Arr,5)<<endl;
     cout<<findposition(Arr,5,10);
return 0;
}

/*int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array (in ascending order):\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    bool found = binarySearch(arr, size, target);

    if (found)
        cout << "Number " << target << " is available in the array." <<endl;
    else
        cout << "Number " << target << " is not available in the array." << endl;

    return 0;
}*/

