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


        for(auto it = v.begin(); it != v.end(); it++)
        {
            cout<<*(it)<<" ";
        }
        v.erase(v.begin()+1, v.begin()+3); // deletes elements from index 1 to 2
        v.insert(v.begin(), 5); // inserts 5 at the beginning
        v.insert(v.begin()+1, 2, 100); // inserts 100 two times at index 1
         

       }

    void explainList()
       {
        list<int> ls;
        ls.push_back(1);
        ls.emplace_back(2);
        ls.push_front(4);
        ls.emplace_front(5);

        for(auto it = ls.begin(); it != ls.end(); it++)
        {
            cout<<*(it)<<" ";
        }
        cout<<endl;
        ls.erase(ls.begin());
        ls.remove(2); // removes all occurrences of 2
       }
    void explainDeque()
       {
        deque<int> dq;
        dq.push_back(1);
        dq.emplace_back(2);
        dq.push_front(4);
        dq.emplace_front(5);

        for(auto it = dq.begin(); it != dq.end(); it++)
        {
            cout<<*(it)<<" ";
        }
        cout<<endl;
        dq.erase(dq.begin(), dq.begin()+1);
       }
    void explainStack()
       {
        stack<int> st;
        st.push(1);
        st.push(2);
        st.push(3);
        cout<<st.top()<<endl; // prints 3
        st.pop();
        cout<<st.top()<<endl; // prints 2
       } 
    void explainQueue()
       {
        queue<int> q;
        q.push(1);
        q.push(2);
        q.push(3);
        cout<<q.front()<<endl; // prints 1
        q.pop();
        cout<<q.front()<<endl; // prints 2
       } 
    void explainPriorityQueue()
       {
        priority_queue<int> pq; // max heap
        pq.push(1);
        pq.push(2);
        pq.push(3);
        cout<<pq.top()<<endl; // prints 3
        pq.pop();
        cout<<pq.top()<<endl; // prints 2

        priority_queue<int, vector<int>, greater<int>> minHeap; // min heap
        minHeap.push(1);
        minHeap.push(2);
        minHeap.push(3);
        cout<<minHeap.top()<<endl; // prints 1
        minHeap.pop();
        cout<<minHeap.top()<<endl; // prints 2
       } 
    void explainSet()
       {
        set<int> st;
        st.insert(1);
        st.insert(2);
        st.insert(3);
        st.insert(3); // duplicate elements are not allowed
        for(auto it = st.begin(); it != st.end(); it++)
        {
            cout<<*(it)<<" ";
        }
        cout<<endl;
        st.erase(2); // removes 2 from the set
       }
    void explainMultiSet()
       {
        multiset<int> ms;
        ms.insert(1);
        ms.insert(2);
        ms.insert(3);
        ms.insert(3); // duplicate elements are allowed
        for(auto it = ms.begin(); it != ms.end(); it++)
        {
            cout<<*(it)<<" ";
        }
        cout<<endl;
        ms.erase(3); // removes all occurrences of 3
       }
    void explainUnorderedSet()
       {
        unordered_set<int> us;
        us.insert(1);
        us.insert(2);
        us.insert(3);
        us.insert(3); // duplicate elements are not allowed
        for(auto it = us.begin(); it != us.end(); it++)
        {
            cout<<*(it)<<" ";
        }
        cout<<endl;
        us.erase(2); // removes 2 from the set
       }
    void explainMap()
       {
        map<int, int> mp;
        mp[1] = 2;
        mp[2] = 3;
        mp[3] = 4;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
        cout<<endl;
        mp.erase(2); // removes the key 2 from the map
       }
    void extra()
       {
        sort(a,a+n); // sorts the array in ascending order
        sort(v.begin(), v.end()); // sorts the vector in ascending order
        sort(v.begin(), v.end(), greater<int>()); // sorts the vector in descending order
        sort(a,a+n,greater<int>()); // sorts the array in descending order  

       }

 int main()
   {
    explainPair();

   }
   //we can also store an array of pairs