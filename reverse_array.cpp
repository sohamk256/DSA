#include"bits/stdc++.h"
using namespace std;

void reverse_array(int arr[],int start,int end)
{
    if (start>=end) return;
    swap(arr[start],arr[end]);
    reverse_array(arr,start+1,end-1);

}
void rev_array(int i,int arr[],int n)
{
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    rev_array(i+1,arr,n);
}


 int main()
 {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse_array(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
 }
