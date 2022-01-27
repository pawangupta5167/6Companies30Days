//https://leetcode.com/problems/koko-eating-bananas/

class Solution {

public:

    int minEatingSpeed(vector<int>& piles, int H) {

        int len = piles.size(), lo = 1, hi = 1000000000;

        while(lo <= hi)

        {

            int mid = lo + (hi - lo) / 2;

            if(canFinish(piles, mid, H))

                hi = mid - 1;

            else

                lo = mid + 1;

        }

        return lo;

    }

    

private:

    bool canFinish(vector<int>& piles, int k, int H)

    {

        int hours = 0, i = 0, len = piles.size();

        while(i < len)

        {

            int h = (piles[i++] - 1) / k + 1; 

            hours += h;

            if(hours > H)return false;

        }

        return true;

    }

};
