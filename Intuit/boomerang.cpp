//https://leetcode.com/problems/number-of-boomerangs/ 


int numberOfBoomerangs(vector<vector<int>>& pt) {
        int n=pt.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            unordered_map<int,int> mp;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                int d=(pt[i][0]-pt[j][0])*(pt[i][0]-pt[j][0]) +(pt[i][1]-pt[j][1])*(pt[i][1]-pt[j][1]);
                mp[d]++;
            }
            for(auto x:mp)
            {
                int cnt=x.second;
                if(cnt>1)
                {
                    sum+=cnt*(cnt-1);
                }
            }
        }
        return sum;        
    }
