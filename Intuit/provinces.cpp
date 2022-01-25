//https://leetcode.com/problems/number-of-provinces/

void dfs(vector<vector<int>>& con, int ind,vector<int> &vis)
    {
        if(vis[ind])
            return;
        vis[ind]=1;
        for(int j=0;j<vis.size();j++)
        {
            if(con[ind][j] && vis[j]==0)
            {
                dfs(con,j,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& con) {
        int n=con.size(),cnt=0;
        vector<int> vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                dfs(con,i,vis);   
                cnt++;
            }
        }        
        return cnt;
    }
