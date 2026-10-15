#include"bits/stdc++.h"
using namespace std;
int main()
{
    string s;
    cin>>s;

    //precompute
     int hash[26]={0};
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]-'a']++;//calculate the hash value of the string using ascii values
        }

    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl; //fetch the hash value of the character using ascii values
    }
    return 0;
}