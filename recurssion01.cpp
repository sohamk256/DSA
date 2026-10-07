#include"bits/stdc++.h"
using namespace std;
 int cnt=0;
 int n; 
void print()
{
    if(cnt==5) return;
    cout<<cnt<<endl;
    cnt++;
    print();

}
void print_name()
{
    cin>>n;
    if(cnt==n) return;
    cout<<"Soham"<<endl;
    cnt++;
    print_name();
    
}
int main()
{
    print_name();
    return 0;
}