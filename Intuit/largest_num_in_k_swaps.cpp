//https://practice.geeksforgeeks.org/problems/largest-number-in-k-swaps-1587115620/1#

// { Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends

class Solution

{

    public:

    //Function to find the largest number after k swaps.

    string find(string st,int idx,int k)

    {

        if(k==0 || idx==st.size())

        return st;

        int mx=st[idx];

        for(int i=idx+1;i<st.size();i++)

        {

            mx=max(mx,(int)st[i]);

        }

        // cout<<mx<<" ";

        if(mx==st[idx])

        {

            return find(st,idx+1,k);

        }

        string ans=st;

        for(int i=idx+1;i<st.size();i++)

        {

            if((int)st[i]==mx)

            {

                swap(st[i],st[idx]);

                // cout<<st<<" ";

                ans=max(ans,find(st,idx+1,k-1));

                swap(st[i],st[idx]);

            }

        }

        return ans;

    }

    //Function to find the largest number after k swaps.

    string findMaximumNum(string str, int k)

    {

          return find(str,0,k);

    }

};

// { Driver Code Starts.

int main()

{

    int t, k;

    string str;

    cin >> t;

    while (t--)

    {

        cin >> k >> str;

        Solution ob;

        cout<< ob.findMaximumNum(str, k) << endl;

    }

    return 0;

}

  // } Driver Code Ends
