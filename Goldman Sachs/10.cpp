//10.Find max 10 numbers in a list having 10M entries.

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void findMax(int arr[],int n,int k)
    {
        vector<int> final;
        priority_queue<int> temp;
        for(int i=0;i<n;i++)
            temp.push(arr[i]);
        for(int i=0;i<k;i++)
        {
            final.push_back(temp.top());
            temp.pop();
        }
        for(auto it:final)
            cout<<it<<" ";
    }
};