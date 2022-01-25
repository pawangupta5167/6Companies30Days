//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/submissions/

int calc(vector<int>& wt, int tot)
    {
        int cur=0,ans=1;
        for(int i=0;i<wt.size();i++)
        {
            cur+=wt[i];
            if(cur>tot)
            {
                ans++;
                cur=wt[i];
            }
        }
        return ans;
    }
    int shipWithinDays(vector<int>& wt, int days) {
        int n=wt.size(),st,en;
        for(int i=0;i<n;i++)
        {
            en+=wt[i];
        }
        st=*max_element(wt.begin(),wt.end());
        while(st<en)
        {
            int mid=(en-st)/2+st;
            if(calc(wt,mid)<=days) en=mid;
            else st=mid+1;
        }
        return en;
    }
