#include"bits/stdc++.h"
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //precompute the hash values of the array
    int hash[13]={0};
     for(int i=0;i<n;i++)
     {
         hash[arr[i]]++;
          
     }
//fetch the hash values of the array
     int a;
     cin>>a;
      while(a--)
      {
        int x;
        cin>>x;
        cout<<hash[x]<<endl; 
      }
    return 0;
}