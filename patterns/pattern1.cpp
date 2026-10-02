#include<iostream>
using namespace std;

//boc square pattern 
void print(int n) 
{
 for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"*"<<" ";      
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the width if the square :\n";
    cin>>n;
    
    
    print(n);
}