//https://leetcode.com/problems/split-array-largest-sum/description/

int calc(vector<int> &nums, int tot)

    {

        int n=nums.size(),ans=1,cur=0;

        for(int i=0;i<n;i++)

        {

            cur+=nums[i];

            if(cur>tot)

            {

                ans++;

                cur=nums[i];

            }

        }    

        return ans;

    }

    int splitArray(vector<int>& nums, int m) {

        int en=accumulate(nums.begin(),nums.end(),0);

        int st=*max_element(nums.begin(),nums.end());

        

        while(st<en)

        {

            int mid=(en-st)/2+st;

            if(calc(nums,mid)<=m) en=mid;

            else st=mid+1;

        }

        return en;
      }
