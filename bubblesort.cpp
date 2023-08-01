
#include <iostream>
using namespace std;

int main()
{
  int N;
  cout << "Enter the size of an array : ";
  cin >> N;
  int *arr = new int[N];
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }//this program is made by Dhruvi-22cs053
  cout << "The sorted array" << endl;
  for (int i = 0; i < N; i++)
  {
    bool sort = false;
    for (int j = 0; j < N - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        sort = true;
      }
    }
    if (!sort)
    {
      break;
    }

    cout << "After " << i + 1 << " pass" << endl;
    for (int k = 0; k < N; k++)
    {
      cout << arr[k] << " ";
    }
    cout << endl << endl;
  }
  for (int i = 0; i < N; i++)
  {
    cout << arr[i] << " ";
  }
  cout<<endl;
  cout<<"This program is done by Dhruvi_22cs053"<<endl;
  return 0;
}

