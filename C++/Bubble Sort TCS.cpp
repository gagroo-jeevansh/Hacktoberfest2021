/*program to print an array which is sorted and its adjacent elements swapped*/

#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}

void swap_print(int arr[],int n)
{
  for(int i=0;i<n;i+=2)
  {
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
  }
  for(int k=0;k<n;k++)
    cout<<arr[k]<<" ";
}

int main()
{
  int n,y;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
      cin>>arr[i];
  bubblesort(arr,n);
  swap_print(arr,n);
  return 0;
}
