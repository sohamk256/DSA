#include"bits/stdc++.h"
using namespace std;
bool check_palindrome(int i,string str)
{
     if (i>=str.size()/2) return true;
     if (str[i] != str[str.size()-1-i]) return false;
     return check_palindrome(i+1,str); 

}

int main()
{
    string str;
    cin>>str;
    if (check_palindrome(0,str))
    {  
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
}