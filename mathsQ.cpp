#include"bits/stdc++.h"
using namespace std;
void digits(int n)
{
    while(n>0)
    {
        int last=n%10;
         cout<<last<<" ";
        n/=10;
        
    }
}

void digits_of_number(int n)
{
    int count=0;
    while(n>0)
    {
        int last =n%10;
        count+=1;
       
        n/=10;

    }
    cout<<count;
}
void count_dig_m2(int n)
{
    int count=(int)(log10(n)+1);// type casting to int
    cout<<count;
}
void rev_of_number(int n)
{
    int rev=0;

     while(n>0)
      {
        int last=n%10;
           rev=rev*10+last;
            n/=10;
      }
      cout<<rev;
}
void alldivisors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {cout<<i<<" ";}
        
    } 
}

int main()
{
    int n;
    cin>>n;
    digits_of_number(n);
   
}