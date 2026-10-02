#include"bits/stdc++.h"
using namespace std;


 void explainPair()
       {
        pair<int,int> p = {1, 2};
        pair<int,pair<int,int>> p1 = {1, {2, 3}};
        cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
      }
 void explainVector()
       {
        vector<int> v;
        v.push_back(1);
        v.emplace_back(2);
        //vector of pairs
        vector<pair<int,int>> vec;
        vec.push_back({1,2});
        vec.emplace_back(1,2);

        vector<int> v1(5, 100); // 5 elements, each initialized to 100
        vector<int> v2(5); // 5 elements, each initialized to 0
        vector<int> v3{1,2,3,4,5,6};
        vector<int> v4(v3); // copy of v3



        vector<int>::iterator it = v.begin();
         it++;
         cout<<*(it)<<" ";

         vector<int>::iterator it = v.end();
         vector<int>::iterator it = v.rend();
         vector<int>::iterator it = v.rbegin();
         

       }
 int main()
   {
    explainPair();

   }
   //we can also store an array of pairs