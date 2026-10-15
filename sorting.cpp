#include"bits/stdc++.h"
using namespace std;
void selection_sort(int arr[],int n)
{
     for(int i=0;i<=n-2;i++)
     {
        int min=i;
        for(int j=i+1;j<=n-1;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;

            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
     }
}
void bubble_sort(int arr[],int n)

{
  for(int i=n-1;i>=1;i--)
    {
        int did_swap=0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                did_swap=1;
            }
        }
        if(did_swap==0) break; 
    }
}
void insertion_sort(int arr[],int n)
{
     for(int i=1;i<=n-1;i++)
      { int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
         }
}
}
int main()
{
     int n;
     cin>>n;
     int arr[n];
       for(int i=0;i<n;i++) cin>>arr[i];
        bubble_sort(arr,n);
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";  
      


    return 0;
}